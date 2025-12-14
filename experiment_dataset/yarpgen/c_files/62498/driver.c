#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30432;
unsigned short var_1 = (unsigned short)62219;
unsigned long long int var_3 = 593304047947445756ULL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-25056;
int zero = 0;
int var_10 = -899972060;
unsigned short var_11 = (unsigned short)55594;
long long int var_12 = -182951522630907447LL;
int var_13 = 1347796052;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
