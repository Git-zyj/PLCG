#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)15448;
int var_3 = 2028114585;
unsigned int var_5 = 3904868091U;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 14076064910311163489ULL;
signed char var_9 = (signed char)29;
int zero = 0;
unsigned long long int var_10 = 1311604896674430410ULL;
long long int var_11 = -8685121724938283144LL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
