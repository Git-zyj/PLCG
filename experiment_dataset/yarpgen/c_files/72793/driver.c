#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)130;
unsigned char var_4 = (unsigned char)22;
unsigned char var_6 = (unsigned char)50;
long long int var_9 = 765057677095808556LL;
int var_12 = 834705771;
unsigned char var_13 = (unsigned char)5;
int zero = 0;
unsigned short var_19 = (unsigned short)57251;
short var_20 = (short)24728;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
