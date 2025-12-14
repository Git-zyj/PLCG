#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22096;
unsigned long long int var_1 = 7674115406075034507ULL;
unsigned char var_7 = (unsigned char)108;
int zero = 0;
unsigned int var_18 = 1344080942U;
_Bool var_19 = (_Bool)1;
int var_20 = -2135790437;
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
