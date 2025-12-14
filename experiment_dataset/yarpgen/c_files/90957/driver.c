#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30521;
signed char var_4 = (signed char)-105;
unsigned char var_7 = (unsigned char)94;
unsigned long long int var_9 = 10416690861078607733ULL;
unsigned long long int var_11 = 10638264268192979397ULL;
signed char var_16 = (signed char)55;
int zero = 0;
int var_20 = -1226121216;
long long int var_21 = -8550240230179569775LL;
unsigned short var_22 = (unsigned short)50881;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
