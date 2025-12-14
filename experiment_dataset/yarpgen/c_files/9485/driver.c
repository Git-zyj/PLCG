#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17437;
unsigned long long int var_2 = 18074353800188882512ULL;
short var_9 = (short)14872;
signed char var_10 = (signed char)118;
int var_11 = -439492334;
unsigned char var_15 = (unsigned char)136;
int zero = 0;
long long int var_18 = -4297654291529675876LL;
long long int var_19 = -7593701229658672094LL;
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
