#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 666409015;
int var_2 = -600711501;
unsigned char var_10 = (unsigned char)207;
int var_12 = 596744520;
unsigned long long int var_14 = 8742512250565582012ULL;
int var_15 = -1913954003;
unsigned int var_16 = 2984940061U;
int zero = 0;
unsigned int var_17 = 2170028871U;
unsigned char var_18 = (unsigned char)119;
unsigned short var_19 = (unsigned short)41557;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
