#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1369166719760049673LL;
unsigned char var_2 = (unsigned char)161;
unsigned char var_4 = (unsigned char)216;
long long int var_9 = -9013622994182199734LL;
int zero = 0;
short var_10 = (short)-26707;
unsigned short var_11 = (unsigned short)24341;
unsigned short var_12 = (unsigned short)2518;
unsigned char var_13 = (unsigned char)93;
unsigned int var_14 = 1127880976U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
