#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>

void list_files(const char *path) {
    struct dirent *entry;
    struct stat file_info;
    DIR *dp = opendir(path);

    if (dp == NULL) {
        perror("opendir");
        return;
    }

    printf("Files in directory '%s':\n\n", path);

    while ((entry = readdir(dp)) != NULL) {
        if (entry->d_type == DT_REG) {  // Only list regular files
            char filepath[1024];
            snprintf(filepath, sizeof(filepath), "%s/%s", path, entry->d_name);
            if (stat(filepath, &file_info) == 0) {
                printf("%s - \tSize: %ld bytes\n", entry->d_name, file_info.st_size);
            }
        }
    }

    closedir(dp);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <directory_path>\n", argv[0]);
        return 1;
    }

    list_files(argv[1]);
    return 0;
}
