#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3222302749U;
int var_4 = -316441232;
long long int var_9 = 8724722010023311653LL;
unsigned short var_12 = (unsigned short)24355;
signed char var_13 = (signed char)-114;
int zero = 0;
unsigned short var_14 = (unsigned short)57661;
unsigned short var_15 = (unsigned short)50793;
signed char var_16 = (signed char)-2;
void init() {
}

void checksum() {
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
