#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19546;
_Bool var_1 = (_Bool)0;
unsigned char var_7 = (unsigned char)32;
unsigned short var_8 = (unsigned short)16042;
unsigned char var_18 = (unsigned char)27;
int zero = 0;
unsigned short var_19 = (unsigned short)15772;
unsigned int var_20 = 1024006695U;
unsigned int var_21 = 3380165188U;
void init() {
}

void checksum() {
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
