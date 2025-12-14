#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17882278889625498283ULL;
long long int var_7 = -2397037508134752285LL;
unsigned long long int var_17 = 13488239212738525362ULL;
int var_18 = -85365409;
int zero = 0;
unsigned int var_20 = 754894607U;
unsigned long long int var_21 = 2894658429973572127ULL;
void init() {
}

void checksum() {
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
