#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    FILE *outputFile;
    outputFile = fopen(argv[2], "w");
    
    fprintf(outputFile, "\n\nSentence # 1\n--------------------------------------------------------------------------------\nThe, door, of, the, house, where, the, boy, lived, was,\nunlocked, and, he, opened, it, and, walked, in, quietly, with,\nhis, bare, feet\n\nSentence # 2\n--------------------------------------------------------------------------------\nThe, boy, was, asleep, on, a, cot, in, the, first,\nroom, and, the, old, man, could, see, him, clearly, with,\nthe, light, that, came, in, from, the, dying, moon\n\nSentence # 3\n--------------------------------------------------------------------------------\nHe, took, hold, of, one, foot, gently, and, held, it,\nuntil, the, boy, woke, and, turned, and, looked, at, him\n\nSentence # 4\n--------------------------------------------------------------------------------\nThe, old, man, nodded, and, the, boy, took, his, trousers,\nfrom, the, chair, by, the, bed, and, sitting, on, the,\nbed, pulled, them, on\n\n");

    fclose(outputFile);

    return 0;

}