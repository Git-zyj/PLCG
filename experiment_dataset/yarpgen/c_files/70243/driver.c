#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10133;
unsigned short var_4 = (unsigned short)26603;
short var_9 = (short)12917;
int zero = 0;
unsigned short var_19 = (unsigned short)38045;
unsigned char var_20 = (unsigned char)63;
unsigned char var_21 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
