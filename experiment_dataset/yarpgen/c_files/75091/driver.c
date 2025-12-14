#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-15182;
long long int var_7 = -742994362711778947LL;
short var_9 = (short)-17645;
unsigned short var_10 = (unsigned short)59959;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3114424037U;
_Bool var_18 = (_Bool)1;
long long int var_19 = 5570751744959741926LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
