#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7766390836884684036LL;
unsigned int var_6 = 3058265062U;
int var_13 = -494975530;
signed char var_15 = (signed char)-2;
int zero = 0;
unsigned int var_16 = 420662862U;
unsigned long long int var_17 = 9855802283240077634ULL;
int var_18 = 1500258711;
void init() {
}

void checksum() {
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
