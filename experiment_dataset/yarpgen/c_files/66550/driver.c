#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2810288148546421843LL;
unsigned int var_5 = 851487194U;
unsigned short var_8 = (unsigned short)11786;
int var_11 = -1620378043;
signed char var_13 = (signed char)124;
int zero = 0;
unsigned long long int var_14 = 6193506402182212730ULL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
