#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-6417;
unsigned char var_6 = (unsigned char)107;
signed char var_9 = (signed char)-107;
unsigned long long int var_10 = 1224517529701127834ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)33709;
signed char var_12 = (signed char)98;
signed char var_13 = (signed char)48;
unsigned char var_14 = (unsigned char)109;
int var_15 = -1308445057;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
