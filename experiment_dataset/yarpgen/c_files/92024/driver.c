#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4945334582322953541LL;
unsigned char var_2 = (unsigned char)73;
unsigned char var_4 = (unsigned char)211;
int var_11 = -1266588316;
int zero = 0;
short var_12 = (short)8547;
unsigned char var_13 = (unsigned char)159;
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
