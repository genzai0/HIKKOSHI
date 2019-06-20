#!/bin/bash
read filename

uplatex $filename.tex
dvipdf $filename.dvi
evince $filename.pdf
