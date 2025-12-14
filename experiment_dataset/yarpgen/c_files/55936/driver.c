#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23425;
_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)149;
unsigned short var_6 = (unsigned short)43983;
int var_9 = 1791094863;
signed char var_12 = (signed char)42;
int zero = 0;
unsigned short var_14 = (unsigned short)20215;
unsigned long long int var_15 = 2525107003053588183ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
