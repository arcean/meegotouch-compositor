#!/bin/sh
head -1 ../debian/changelog | awk '{print $2}' | tr -d '()'
