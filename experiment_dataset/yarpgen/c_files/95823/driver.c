#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1952583369;
short var_4 = (short)19022;
int var_5 = -489153302;
unsigned long long int var_8 = 7562238081412322653ULL;
int zero = 0;
short var_10 = (short)31576;
unsigned short var_11 = (unsigned short)45919;
unsigned char var_12 = (unsigned char)127;
short var_13 = (short)-26146;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
