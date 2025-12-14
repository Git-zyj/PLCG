#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14079081999807085958ULL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-1624;
unsigned long long int var_17 = 4594175691880589615ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-115;
unsigned char var_21 = (unsigned char)141;
void init() {
}

void checksum() {
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
