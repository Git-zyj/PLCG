#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)19888;
unsigned char var_5 = (unsigned char)203;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)18367;
unsigned char var_9 = (unsigned char)38;
unsigned short var_11 = (unsigned short)47688;
int zero = 0;
unsigned char var_13 = (unsigned char)98;
int var_14 = 383242431;
short var_15 = (short)-10367;
unsigned int var_16 = 1600410542U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
