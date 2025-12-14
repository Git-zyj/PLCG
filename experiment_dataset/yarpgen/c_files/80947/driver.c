#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3330938147U;
int var_2 = 1450360317;
long long int var_5 = 4741289637051453320LL;
unsigned char var_6 = (unsigned char)76;
int zero = 0;
long long int var_15 = -2891079279828513248LL;
signed char var_16 = (signed char)99;
int var_17 = -1264943006;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
