// sometimes we want to pass arguments from the command line to the program a set of inputs.
// command line arguments are used to supply parameters to the  programs . 
// it is mostly used when you want to control your program from your console.These arguments are passed to the main() method . 


// FFmpeg is a free and open source consisting of vast software suites of libraries and programs for handling video  , audio  and other multimedia files and streams.
// Ffmpeg.exe is a command line utility written in c language . Other examples are  git , brew  , apt-get etc ==


#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("the value of argc is %d \n",argc);   // the value of argc will be 1 as no arguments are assigned to argc

    for(int i = 0 ; i<argc ; i++){
        printf("this argument at index number %d has value %s \n",i,  argv[i]);
    }
     
    return 0;
}
