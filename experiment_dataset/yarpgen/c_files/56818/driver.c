#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-62;
unsigned short var_1 = (unsigned short)24761;
unsigned short var_5 = (unsigned short)28104;
unsigned int var_6 = 832812462U;
long long int var_7 = 5092630263128936101LL;
unsigned int var_12 = 3467413383U;
unsigned char var_16 = (unsigned char)59;
int zero = 0;
unsigned int var_17 = 3790855344U;
signed char var_18 = (signed char)29;
long long int var_19 = -2379601987087862964LL;
int var_20 = -1025605461;
unsigned short var_21 = (unsigned short)64024;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
