#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2988219732731867652ULL;
unsigned char var_1 = (unsigned char)216;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3179573673U;
long long int var_8 = 7080203587513465080LL;
signed char var_13 = (signed char)65;
signed char var_14 = (signed char)102;
unsigned int var_15 = 2283223401U;
int zero = 0;
short var_16 = (short)22525;
long long int var_17 = -4659819661154772011LL;
unsigned short var_18 = (unsigned short)51711;
int var_19 = 86823601;
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
