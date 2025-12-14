#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4206492896642849011LL;
long long int var_3 = -8364577570528623539LL;
unsigned int var_10 = 719396724U;
signed char var_11 = (signed char)-71;
unsigned long long int var_14 = 14449840259900645452ULL;
signed char var_15 = (signed char)-94;
int zero = 0;
signed char var_17 = (signed char)-18;
unsigned short var_18 = (unsigned short)33801;
void init() {
}

void checksum() {
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
