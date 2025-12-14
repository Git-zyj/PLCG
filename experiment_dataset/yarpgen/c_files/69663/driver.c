#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1865451029U;
unsigned int var_7 = 2039753225U;
long long int var_11 = -3988471357554756043LL;
int zero = 0;
unsigned char var_13 = (unsigned char)138;
short var_14 = (short)17248;
unsigned char var_15 = (unsigned char)156;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
