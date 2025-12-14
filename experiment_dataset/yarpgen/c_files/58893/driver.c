#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)35240;
signed char var_6 = (signed char)-25;
short var_9 = (short)9402;
int zero = 0;
long long int var_17 = 5505881435546716667LL;
unsigned int var_18 = 1236971665U;
unsigned short var_19 = (unsigned short)62816;
short var_20 = (short)-12954;
int var_21 = -549906701;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
