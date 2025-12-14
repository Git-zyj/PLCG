#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1443727215;
short var_2 = (short)-24523;
short var_3 = (short)31909;
int var_4 = -1609792263;
unsigned char var_6 = (unsigned char)223;
_Bool var_7 = (_Bool)1;
signed char var_11 = (signed char)-7;
short var_12 = (short)-20268;
int zero = 0;
signed char var_14 = (signed char)-116;
short var_15 = (short)-21779;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
