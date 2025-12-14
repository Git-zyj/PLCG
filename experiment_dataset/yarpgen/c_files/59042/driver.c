#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35339;
_Bool var_1 = (_Bool)1;
int var_2 = -1702779765;
unsigned long long int var_3 = 15918635530965631465ULL;
short var_6 = (short)-31993;
long long int var_10 = 8991952959708318330LL;
_Bool var_11 = (_Bool)0;
long long int var_15 = -6371884664778325784LL;
int zero = 0;
signed char var_16 = (signed char)-8;
signed char var_17 = (signed char)-102;
unsigned short var_18 = (unsigned short)51079;
void init() {
}

void checksum() {
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
