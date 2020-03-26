#!/bin/bash

function wypisz()
{
    echo $argument
    argument="wypisany"
}

argument="poczatek"
wypisz
wypisz
