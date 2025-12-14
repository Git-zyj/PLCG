#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)45086;
unsigned int var_3 = 739460128U;
signed char var_7 = (signed char)22;
signed char var_8 = (signed char)-119;
unsigned char var_9 = (unsigned char)238;
long long int var_11 = 2350845109638852952LL;
int zero = 0;
long long int var_13 = -4575446151702323797LL;
int var_14 = -1493005391;
void init() {
}

void checksum() {
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
