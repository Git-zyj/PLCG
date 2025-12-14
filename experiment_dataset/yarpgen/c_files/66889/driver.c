#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6492;
unsigned long long int var_5 = 17280528820778758932ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 8529416329891006120ULL;
_Bool var_10 = (_Bool)1;
int var_11 = -1234335210;
unsigned char var_12 = (unsigned char)73;
signed char var_15 = (signed char)-84;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)76;
unsigned int var_20 = 2427704171U;
unsigned long long int var_21 = 9566277122937866891ULL;
int var_22 = 1451506908;
void init() {
}

void checksum() {
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
