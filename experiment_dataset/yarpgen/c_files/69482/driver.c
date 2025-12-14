#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8488869120160199997LL;
signed char var_13 = (signed char)-8;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)130;
signed char var_21 = (signed char)79;
unsigned short var_22 = (unsigned short)37716;
unsigned char var_23 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
