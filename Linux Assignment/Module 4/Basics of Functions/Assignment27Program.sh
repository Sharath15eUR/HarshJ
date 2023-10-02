#!/usr/bin/env bash

func1(){
    df -h | head;
}
func2(){
    du -h | head
}
echo -e "First function:\n"
func1
echo -e "Second function:\n"
func2