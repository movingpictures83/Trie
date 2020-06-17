#ifndef TRIEPLUGIN_H
#define TRIEPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class TriePlugin : public Plugin
{
public: 
 std::string toString() {return "Trie";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
