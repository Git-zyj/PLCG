#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)226;
unsigned int var_4 = 950256011U;
unsigned int var_5 = 1135173901U;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = 1905857284;
long long int var_15 = 1345920106381052062LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
