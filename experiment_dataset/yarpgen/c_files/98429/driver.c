#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4809;
int var_2 = 1284789341;
unsigned long long int var_4 = 6033199878893918875ULL;
unsigned char var_7 = (unsigned char)150;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-52;
unsigned char var_13 = (unsigned char)81;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
