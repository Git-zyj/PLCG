#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)65158;
unsigned char var_4 = (unsigned char)176;
short var_5 = (short)-8196;
unsigned int var_7 = 3363830672U;
unsigned int var_9 = 2773488857U;
unsigned long long int var_10 = 15777591078818402694ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)107;
int var_12 = 919280115;
void init() {
}

void checksum() {
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
