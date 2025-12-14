#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 374314242;
short var_2 = (short)-7372;
unsigned short var_4 = (unsigned short)32122;
unsigned int var_9 = 3836691102U;
unsigned int var_12 = 2376937916U;
unsigned char var_14 = (unsigned char)46;
unsigned int var_15 = 1497241202U;
unsigned short var_16 = (unsigned short)34816;
unsigned short var_17 = (unsigned short)28431;
int zero = 0;
unsigned short var_19 = (unsigned short)39763;
unsigned char var_20 = (unsigned char)46;
unsigned int var_21 = 3426986179U;
unsigned int var_22 = 1711652107U;
int var_23 = 887497903;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
