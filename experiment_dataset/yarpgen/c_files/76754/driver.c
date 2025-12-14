#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1672771545;
short var_2 = (short)22099;
unsigned long long int var_6 = 8300945536270273947ULL;
short var_7 = (short)-29970;
unsigned int var_10 = 562491706U;
signed char var_13 = (signed char)84;
unsigned short var_17 = (unsigned short)17881;
int zero = 0;
short var_18 = (short)-9075;
short var_19 = (short)18193;
void init() {
}

void checksum() {
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
