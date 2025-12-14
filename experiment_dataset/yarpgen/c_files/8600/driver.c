#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11823;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)64;
unsigned int var_9 = 836490184U;
signed char var_12 = (signed char)-118;
int var_13 = -164529378;
int zero = 0;
unsigned int var_16 = 4070302230U;
unsigned int var_17 = 2799713963U;
int var_18 = -568820671;
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
