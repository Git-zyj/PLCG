#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1210211792;
short var_2 = (short)31438;
long long int var_6 = 7808542615185612089LL;
unsigned long long int var_7 = 876805967973475434ULL;
long long int var_8 = 2145634883481913753LL;
unsigned int var_12 = 1712003738U;
signed char var_13 = (signed char)-76;
int zero = 0;
signed char var_15 = (signed char)98;
short var_16 = (short)-8632;
long long int var_17 = -478953329192341473LL;
unsigned char var_18 = (unsigned char)20;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
