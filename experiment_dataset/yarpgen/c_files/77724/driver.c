#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28029;
unsigned long long int var_1 = 15908938491710314498ULL;
unsigned long long int var_3 = 12514656729354161649ULL;
int var_4 = 1275531027;
int var_5 = 141215392;
short var_6 = (short)-30239;
unsigned short var_7 = (unsigned short)40480;
signed char var_12 = (signed char)-20;
int zero = 0;
int var_13 = -457406819;
unsigned long long int var_14 = 10088326265304821775ULL;
unsigned char var_15 = (unsigned char)55;
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
