#include <string>
#include <iostream>
#include <dirent.h>
int main()
{
    std::string path = "../images";
DIR *dir;
struct dirent *ent;
if ((dir = opendir ("c:\\src\\")) != NULL) {
  /* print all the files and directories within directory */
  while ((ent = readdir (dir)) != NULL) {
    std::cout<<"%s\n", ent->d_name;
  }
  closedir (dir);
} else {
  /* could not open directory */
  std::cout<<"";
  return EXIT_FAILURE;
}
}