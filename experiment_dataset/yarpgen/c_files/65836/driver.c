#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26599;
signed char var_4 = (signed char)-88;
signed char var_7 = (signed char)49;
unsigned int var_11 = 3987222918U;
unsigned long long int var_16 = 1613106197560243075ULL;
int zero = 0;
short var_17 = (short)-14680;
int var_18 = 1641284151;
unsigned int var_19 = 2769459117U;
void init() {
}

void checksum() {
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
