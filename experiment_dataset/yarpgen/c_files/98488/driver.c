#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)122;
long long int var_1 = -4799090683787401651LL;
unsigned int var_2 = 1735465118U;
unsigned int var_6 = 4067868448U;
unsigned int var_7 = 263384728U;
signed char var_9 = (signed char)117;
unsigned short var_12 = (unsigned short)48318;
int zero = 0;
int var_14 = 1318465058;
long long int var_15 = 7052493382341341734LL;
long long int var_16 = 4337976112024371098LL;
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
