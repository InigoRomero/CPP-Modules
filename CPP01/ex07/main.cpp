# include <iostream>
# include <string>
# include <fstream>
# include <sstream>
# include <sys/stat.h>

using namespace std;

int exit_error(std::string str)
{
    std::cout << str << std::endl;
    return (0);
}
//https://stackoverflow.com/questions/12774207/fastest-way-to-check-if-a-file-exist-using-standard-c-c11-c check if file exits
inline bool exists (const std::string& name) {
  struct stat buffer;   
  return (stat (name.c_str(), &buffer) == 0); 
}
//https://stackoverflow.com/questions/2896600/how-to-replace-all-occurrences-of-a-character-in-string
std::string ReplaceAll(std::string str, const std::string& from, const std::string& to) {
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
    }
    return str;
}

int    check_arguemnts( std::string filename,  std::string s1,  std::string s2)
{
    if (filename.empty())
        return (0);
    if (s1.empty())
        return (0);
    if (s2.empty())
        return (0);
    if (!exists(filename))
        return (0);
    return (1);
}

int     main(int argc, char **argv)
{
    std::string filename, s1, s2, str;
    std::ostringstream  text;

    if (argc != 4)
        return (exit_error("bad arguments"));
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    if (!(check_arguemnts(filename, s1, s2)))
        return (exit_error("invalid arguments"));
    std::ifstream       file(filename);
    text << file.rdbuf();
    str = text.str();
    str = ReplaceAll(str, s1, s2);
    file.close();
    std::ofstream file2(std::string(filename) + ".replace");
    file2 << str;
    return (0);    
}

