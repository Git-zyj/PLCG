#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1641621294276840910LL;
signed char var_4 = (signed char)-62;
short var_6 = (short)-29864;
unsigned char var_10 = (unsigned char)80;
short var_12 = (short)16703;
int zero = 0;
short var_14 = (short)-7443;
long long int var_15 = 3029728795621929994LL;
_Bool var_16 = (_Bool)1;
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
