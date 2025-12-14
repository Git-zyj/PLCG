#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)20944;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-7;
short var_17 = (short)-20164;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 12994361601155403709ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
