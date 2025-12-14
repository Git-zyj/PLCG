#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 430255666U;
unsigned long long int var_1 = 12808897570833166738ULL;
unsigned long long int var_2 = 5462422108481744690ULL;
unsigned int var_3 = 2455476130U;
unsigned int var_4 = 3141619063U;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 654084287U;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 8988046466480826518ULL;
unsigned long long int var_11 = 7516022977549921509ULL;
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
