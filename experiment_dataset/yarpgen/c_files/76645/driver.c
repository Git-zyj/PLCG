#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1413437173;
long long int var_2 = 7088038080342148482LL;
long long int var_4 = 6316965508863855763LL;
unsigned long long int var_5 = 10406079705328493153ULL;
unsigned short var_6 = (unsigned short)18020;
int zero = 0;
int var_10 = 1382569162;
unsigned short var_11 = (unsigned short)60982;
signed char var_12 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
