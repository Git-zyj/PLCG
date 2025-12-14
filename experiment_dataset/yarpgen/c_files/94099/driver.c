#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)16943;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)63920;
unsigned short var_18 = (unsigned short)57800;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)26913;
unsigned short var_21 = (unsigned short)31292;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
