#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)38381;
short var_5 = (short)-25933;
unsigned int var_6 = 904157719U;
int var_8 = 245062015;
long long int var_9 = -7225542472430548265LL;
long long int var_11 = -7091234891769514125LL;
long long int var_12 = 8576842986502716282LL;
int var_15 = 1800820446;
int zero = 0;
unsigned short var_16 = (unsigned short)10189;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)22193;
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
