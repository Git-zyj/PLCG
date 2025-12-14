#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4011668661962038249LL;
unsigned char var_2 = (unsigned char)198;
unsigned char var_6 = (unsigned char)166;
short var_9 = (short)-1313;
short var_11 = (short)7106;
unsigned char var_14 = (unsigned char)194;
long long int var_17 = -2248481760785634018LL;
int zero = 0;
short var_19 = (short)8410;
short var_20 = (short)8164;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
