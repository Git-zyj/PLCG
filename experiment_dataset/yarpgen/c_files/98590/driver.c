#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)6133;
long long int var_7 = -7827675169669777737LL;
int zero = 0;
unsigned char var_19 = (unsigned char)133;
unsigned short var_20 = (unsigned short)16459;
long long int var_21 = 2875889632614667421LL;
unsigned short var_22 = (unsigned short)29070;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
