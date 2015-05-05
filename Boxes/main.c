//
//  main.c
//  Boxes
//
//  Created by Jeremy Petter on 2015-05-05.
//  Copyright (c) 2015 Jeremy Petter. All rights reserved.
//

#include <stdio.h>

typedef struct Box Box;
struct Box{
    float length;
    float width;
    float height;
};

float volume (Box myBox);
Box initBox (float length, float width, float height);
float compareBoxVolumes(Box boxOne, Box boxTwo);


int main(int argc, const char * argv[]) {


    Box boxOne = initBox(10, 20, 30);
    Box boxTwo = initBox(10, 20, 60);
    
    printf("Ratio of volume for Box 1 to Box 2 is %f", compareBoxVolumes(boxOne, boxTwo));
    
    return 0;
}

float volume (Box box){
    int boxVolume = box.length * box.width * box.height;
    return boxVolume;
}

Box initBox (float length, float width, float height){
    Box newBox;
    newBox.length = length;
    newBox.width = width;
    newBox.height = height;
    return newBox;
}

float compareBoxVolumes(Box boxOne, Box boxTwo){
    float boxSizeRatio = (volume(boxOne)/volume(boxTwo));
    return boxSizeRatio;
}