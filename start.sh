#!/bin/bash

# Currently the script supports only the macOS and Windows
# i.e. if OS type is not darwin (macOS), then we directly assume windows otherwise
if [[ $OSTYPE == "darwin"* ]]; then
        open build/mq_math.xcodeproj
else
        start build/mq_math.sln
fi
