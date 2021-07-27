#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "TriePlugin.h"

void TriePlugin::input(std::string file) {
 inputfile = file;
}

void TriePlugin::run() {
   
}

void TriePlugin::output(std::string file) {
//beta_diversity.py -i filtered_otu_table.biom -m euclidean,weighted_unifrac,unweighted_unifrac -t rep_set.tre -o beta_div
   //std::string command = "export OLDPATH=${PYTHONPATH}; export PYTHONPATH=${PYTHON2_DIST_PACKAGES}:${PYTHON2_SITE_PACKAGES}:${PYTHONPATH}; pick_otus.py ";
   std::string command = "pick_otus.py ";
 command += "-i "+inputfile+" -m trie ";
 //command += "-o "+file+"; cp "+file+"/*.txt "+file+"/..; export PYTHONPATH=OLDPATH";
 command += "-o "+file+"; cp "+file+"/*.txt "+file+"/..";
 std::cout << command << std::endl;

 system(command.c_str());
}

PluginProxy<TriePlugin> TriePluginProxy = PluginProxy<TriePlugin>("Trie", PluginManager::getInstance());
