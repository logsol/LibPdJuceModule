//
//  main.cpp
//  LibPdJuceModule
//
//  Created by Karl on 23/07/15.
//  Copyright (c) 2015 Karl Pannek. All rights reserved.
//

#include <iostream>
#include "juce_libpd.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    LibPdProcessor lpp;
    lpp.output();
    
    return 0;
}
