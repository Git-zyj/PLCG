#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)1;
short var_9 = (short)31660;
unsigned long long int var_17 = 11472616742336699279ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)52139;
short var_19 = (short)-12368;
short var_20 = (short)-25826;
unsigned short var_21 = (unsigned short)18969;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
