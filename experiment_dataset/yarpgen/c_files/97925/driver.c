#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
signed char var_1 = (signed char)10;
int var_2 = -430944563;
int var_6 = -2129908795;
unsigned short var_7 = (unsigned short)21779;
unsigned long long int var_8 = 10009391312528860129ULL;
int var_9 = 1125581606;
signed char var_11 = (signed char)-84;
long long int var_12 = 8984965458866167312LL;
int zero = 0;
long long int var_13 = 3589463928905308720LL;
short var_14 = (short)-20437;
int var_15 = 1088050857;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
