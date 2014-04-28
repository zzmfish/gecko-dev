#!/bin/bash
export LD_LIBRARY_PATH=`pwd/`modules/tracegraph/src:$LD_LIBRARY_PATH
../mozobj/dist/bin/firefox -no-remote -P mozobj
