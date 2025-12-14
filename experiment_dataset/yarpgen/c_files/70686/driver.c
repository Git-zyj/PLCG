#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3142210728U;
unsigned int var_5 = 3628263544U;
unsigned int var_8 = 1099964796U;
unsigned char var_11 = (unsigned char)32;
long long int var_17 = 3645824933070893810LL;
int zero = 0;
int var_18 = 1041797940;
int var_19 = 602088202;
unsigned long long int var_20 = 7428032446317399600ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
