#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3465859632833535356LL;
signed char var_4 = (signed char)68;
int var_6 = -648181535;
signed char var_9 = (signed char)-83;
signed char var_10 = (signed char)74;
unsigned int var_12 = 1454322603U;
int var_19 = 1811022476;
int zero = 0;
long long int var_20 = -1533413732061554810LL;
unsigned short var_21 = (unsigned short)24033;
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
