#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_5 = (unsigned char)27;
unsigned short var_7 = (unsigned short)37247;
int var_9 = -373587904;
int zero = 0;
unsigned short var_10 = (unsigned short)36079;
unsigned char var_11 = (unsigned char)47;
unsigned char var_12 = (unsigned char)25;
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
