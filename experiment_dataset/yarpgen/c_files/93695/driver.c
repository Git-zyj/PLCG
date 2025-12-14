#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -532681335;
signed char var_2 = (signed char)-36;
signed char var_3 = (signed char)-72;
signed char var_4 = (signed char)93;
int var_5 = -1647088403;
unsigned char var_6 = (unsigned char)79;
unsigned char var_8 = (unsigned char)200;
signed char var_9 = (signed char)-114;
unsigned char var_10 = (unsigned char)74;
int zero = 0;
signed char var_12 = (signed char)123;
unsigned char var_13 = (unsigned char)42;
int var_14 = 828438966;
void init() {
}

void checksum() {
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
