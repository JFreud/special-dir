#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>


int is_directory() {


  return 0;
}


int main(){
  DIR * folder;
  folder = opendir(".");

  struct dirent *entry;

  printf("=============\nNames of files in directory:\n");

  while ((entry = readdir(folder))) {//print names of files
    if (entry -> d_type == DT_DIR) {
      printf("%s (directory)\n", entry -> d_name);
    }
    else {
      printf("%s\n", entry -> d_name);
    }
  }
  printf("=============\n");
  printf("Total Directory Size:\n");
  //total size
  folder = opendir(".");
  unsigned int size = 0;
  while ((entry = readdir(folder))) {
    struct stat sb;
    stat(entry -> d_name, &sb);
    size += sb.st_size;
  }
  printf("%d Bytes\n", size);
  printf("=============\n");




  closedir(folder);
  return 0;
}
