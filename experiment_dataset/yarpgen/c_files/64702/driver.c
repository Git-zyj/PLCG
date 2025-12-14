#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 755357529;
int var_1 = -141131542;
unsigned char var_3 = (unsigned char)23;
unsigned short var_4 = (unsigned short)51985;
unsigned long long int var_13 = 9043270074486333908ULL;
int var_14 = 1266282558;
unsigned char var_17 = (unsigned char)125;
int zero = 0;
unsigned int var_20 = 409068582U;
long long int var_21 = 4217758870254796492LL;
void init() {
}

void checksum() {
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
