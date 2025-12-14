#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 12985839451207062634ULL;
long long int var_9 = 2803918352966517686LL;
unsigned long long int var_10 = 9252123971794079884ULL;
unsigned int var_11 = 2090767745U;
unsigned int var_12 = 3515492577U;
int zero = 0;
unsigned short var_14 = (unsigned short)48150;
signed char var_15 = (signed char)73;
int var_16 = -436592863;
unsigned int var_17 = 1976879002U;
signed char var_18 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
