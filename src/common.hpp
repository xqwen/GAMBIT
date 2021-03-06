#ifndef COMMON_HPP
#define COMMON_HPP

#include "tabixpp/tabix.hpp"
#include "cdflib/cdflib.hpp"

using namespace std;

extern Tabix tfile;
extern string chr_global;
extern string vcf_path;
extern unordered_map<string, int> iCHR;
extern vector<string> sCHR;
extern ldref LDREF;
extern bool DEBUG;
extern bool NOMISS;

#endif

