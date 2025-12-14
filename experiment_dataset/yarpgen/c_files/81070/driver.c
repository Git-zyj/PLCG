#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-90;
int var_5 = 431874067;
signed char var_9 = (signed char)6;
signed char var_10 = (signed char)-71;
unsigned int var_11 = 275601295U;
unsigned int var_14 = 2781864047U;
int zero = 0;
unsigned char var_16 = (unsigned char)95;
unsigned short var_17 = (unsigned short)57018;
unsigned int var_18 = 1835014177U;
unsigned char var_19 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
