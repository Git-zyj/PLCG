#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)131;
int var_2 = -958386246;
signed char var_4 = (signed char)-45;
long long int var_6 = 5140804864514722641LL;
signed char var_9 = (signed char)27;
int zero = 0;
long long int var_11 = -8371827520058024164LL;
unsigned long long int var_12 = 11979061669252980040ULL;
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
