#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2422030331U;
long long int var_4 = -3551309463072656404LL;
short var_5 = (short)-20546;
_Bool var_7 = (_Bool)0;
signed char var_12 = (signed char)-80;
int zero = 0;
short var_14 = (short)12478;
unsigned short var_15 = (unsigned short)50469;
short var_16 = (short)19563;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
