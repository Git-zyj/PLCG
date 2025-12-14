#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2903;
signed char var_4 = (signed char)17;
_Bool var_5 = (_Bool)0;
long long int var_6 = 1391983232580855773LL;
unsigned short var_8 = (unsigned short)28398;
long long int var_9 = 8051926411521506268LL;
signed char var_10 = (signed char)-111;
int zero = 0;
unsigned long long int var_12 = 3011825021192417763ULL;
long long int var_13 = -4737711869289520692LL;
unsigned int var_14 = 1640963774U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
