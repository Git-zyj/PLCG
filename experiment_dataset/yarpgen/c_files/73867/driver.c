#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)96;
unsigned long long int var_4 = 9826116112509923556ULL;
signed char var_8 = (signed char)-29;
int var_15 = 345274190;
unsigned short var_16 = (unsigned short)60140;
int zero = 0;
unsigned int var_17 = 19751815U;
short var_18 = (short)-26836;
short var_19 = (short)630;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
