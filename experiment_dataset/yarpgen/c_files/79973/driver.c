#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)32;
unsigned char var_3 = (unsigned char)41;
unsigned char var_4 = (unsigned char)32;
unsigned char var_5 = (unsigned char)28;
long long int var_6 = 3438077891480350955LL;
long long int var_7 = -641864556491165571LL;
int var_8 = -368910353;
unsigned char var_9 = (unsigned char)55;
int zero = 0;
signed char var_10 = (signed char)-36;
long long int var_11 = 583448177000055568LL;
unsigned char var_12 = (unsigned char)7;
unsigned char var_13 = (unsigned char)25;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
