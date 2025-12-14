#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -956998091;
short var_2 = (short)18399;
unsigned char var_5 = (unsigned char)5;
signed char var_6 = (signed char)-24;
unsigned int var_7 = 3525777165U;
int zero = 0;
int var_10 = 2113131169;
unsigned short var_11 = (unsigned short)47906;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
