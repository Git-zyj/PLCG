#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-20;
unsigned long long int var_3 = 3614107988320881853ULL;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
short var_10 = (short)652;
int zero = 0;
short var_11 = (short)-6743;
unsigned short var_12 = (unsigned short)8681;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1679061845U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
