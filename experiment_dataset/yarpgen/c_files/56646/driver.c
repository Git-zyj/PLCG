#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3194125560U;
unsigned char var_3 = (unsigned char)174;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)24043;
unsigned int var_8 = 2615598924U;
long long int var_9 = 7637425594443921377LL;
long long int var_10 = -5402090338807168493LL;
long long int var_11 = -3496893503900879382LL;
int zero = 0;
unsigned short var_13 = (unsigned short)23057;
signed char var_14 = (signed char)67;
unsigned short var_15 = (unsigned short)42228;
long long int var_16 = -8464697014118621389LL;
signed char var_17 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
