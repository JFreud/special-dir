#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>


int is_directory() {


  return 0;
}


int main(){
  DIR * folder;
  folder = opendir("direct");

  struct dirent *entry;
  struct stat sb;
  
  printf("=============\nNames of files in directory:\n");

  while (entry = readdir(folder)) {//print names of files
    //printf("%d\n", entry -> d_type);
    test = opendir(entry -> d_name);
    if (test) {
      printf("%s (directory)\n", entry -> d_name);
    }
        
    printf("%s\n", entry -> d_name);
  }

  printf("=============\n");

  closedir(folder);
  return 0;
}
