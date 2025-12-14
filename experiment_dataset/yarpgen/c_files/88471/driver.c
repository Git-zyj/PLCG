#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10063233163863504333ULL;
signed char var_4 = (signed char)84;
int var_7 = 1282057357;
signed char var_8 = (signed char)-28;
short var_9 = (short)-27128;
short var_16 = (short)23937;
unsigned short var_17 = (unsigned short)47745;
int zero = 0;
unsigned short var_18 = (unsigned short)9868;
int var_19 = -252734444;
void init() {
}

void checksum() {
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
