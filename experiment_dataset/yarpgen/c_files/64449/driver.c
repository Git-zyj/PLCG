#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 286769904;
int var_3 = 2016111020;
signed char var_6 = (signed char)-45;
int zero = 0;
signed char var_10 = (signed char)62;
unsigned long long int var_11 = 4477642526199649035ULL;
unsigned short var_12 = (unsigned short)19694;
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
