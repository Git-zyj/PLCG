#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-28;
short var_3 = (short)-13645;
unsigned long long int var_4 = 8323114995599471740ULL;
unsigned short var_5 = (unsigned short)64516;
long long int var_10 = 8713171023724633276LL;
unsigned short var_13 = (unsigned short)34862;
int zero = 0;
long long int var_14 = 3269211980479697086LL;
unsigned int var_15 = 4100942093U;
unsigned long long int var_16 = 4901854343935740650ULL;
_Bool var_17 = (_Bool)1;
long long int var_18 = -8501919220671499512LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
