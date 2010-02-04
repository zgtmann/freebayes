//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
// Class-BedReader
// Class definition for BED file reader object
// Copyright 2009 Gabor T. Marth, Boston College
// All rights reserved
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

#ifndef CLASS_BEDREADER_H
#define CLASS_BEDREADER_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <map>
#include <iterator>
#include <algorithm>

using std::ios;
using std::ifstream;
using std::ofstream;
using std::ostream;
using std::istream;
using std::fstream;
using std::cin;
using std::cout;
using std::clog;
using std::endl;
using std::string;

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
// utility routines
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
// type definitions
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Bed data item structure
//------------------------------------------------------------------------------
struct BedData {
  string seq;
  int left;
  int right;
  string desc;
};

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
// class definition
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------


class BedReader {

public:

  //----------------------------------------------------------------------------
  // public functions
  //----------------------------------------------------------------------------

  // constructor
  BedReader(
	    string fn = ""
	   );
  
  // open
  bool open(string fn);

  // close
  bool close();

  // isOpen
  bool isOpen();

  // getNextEntry
  bool getNextEntry(BedData &);

  //----------------------------------------------------------------------------
  // public variables
  //----------------------------------------------------------------------------

private:

  //----------------------------------------------------------------------------
  // private variables
  //----------------------------------------------------------------------------
  
  // file name
  string fileName;

  // file handle
  ifstream bed;

  // file open flag
  bool FILE_OPEN;
};

#endif

