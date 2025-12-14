#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)236;
unsigned char var_2 = (unsigned char)76;
unsigned short var_5 = (unsigned short)64701;
unsigned int var_9 = 63516034U;
signed char var_10 = (signed char)94;
int zero = 0;
long long int var_11 = -9223159649971609136LL;
unsigned char var_12 = (unsigned char)182;
signed char var_13 = (signed char)-82;
unsigned int var_14 = 3378288844U;
void init() {
}

void checksum() {
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
