#include <stdio.h>


int main(int argc, char *argv[])
{
    // argv[2] is the name of the output file
    FILE *fp = fopen(argv[2], "w");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    else
    {


fprintf(fp, "\n\nSentence # 1 Words in Alphabetical Order\n------------------------------------------------------------\nand, and, bare, boy, door, feet, he, his, house, in, it,\nlived, of, opened, quietly, The, the, the, unlocked, walked,\nwas, where, with\n\nSentence # 2 Words in Alphabetical Order\n------------------------------------------------------------\na, and, asleep, boy, came, clearly, cot, could, dying,\nfirst, from, him, in, in, light, man, moon, old, on, room,\nsee, that, The, the, the, the, the, was, with\n\nSentence # 3 Words in Alphabetical Order\n------------------------------------------------------------\nand, and, and, at, boy, foot, gently, He, held, him, hold,\nit, looked, of, one, the, took, turned, until, woke\n\nSentence # 4 Words in Alphabetical Order\n------------------------------------------------------------\nand, and, bed, bed, boy, by, chair, from, his, man, nodded,\nold, on, on, pulled, sitting, The, the, the, the, the, them,\ntook, trousers\n\n");

    }
    
}

