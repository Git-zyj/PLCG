#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4529842053903543940LL;
unsigned int var_5 = 1844220179U;
unsigned long long int var_6 = 14952445415045272221ULL;
signed char var_9 = (signed char)69;
signed char var_11 = (signed char)-34;
long long int var_12 = -658567255628605274LL;
unsigned char var_13 = (unsigned char)121;
int zero = 0;
unsigned short var_19 = (unsigned short)2279;
unsigned char var_20 = (unsigned char)79;
short var_21 = (short)-9409;
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
