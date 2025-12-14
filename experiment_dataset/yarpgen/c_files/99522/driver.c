#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2875017760U;
long long int var_7 = 295748871048331850LL;
long long int var_9 = 8608361061828351384LL;
unsigned short var_11 = (unsigned short)4653;
int zero = 0;
long long int var_12 = -4199671120259013716LL;
unsigned char var_13 = (unsigned char)211;
void init() {
}

void checksum() {
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
