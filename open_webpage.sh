#!/bin/sh


#AtCoderのWebページを開く用のスクリプト

#for i in {41..50}; do open "https://abc0${i}.contest.atcoder.jp/tasks/abc0${i}_a"; done; exit;

cd /Developer/dev/atcoder/src && for i in {81..98}; do cp template.cpp abc0${i}.cpp; open "https://abc0${i}.contest.atcoder.jp/tasks/abc0${i}_a"; done; exit;
