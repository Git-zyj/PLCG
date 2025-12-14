#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1158079124U;
long long int var_4 = 3386931983458623760LL;
unsigned long long int var_7 = 3610261297455605500ULL;
signed char var_8 = (signed char)74;
unsigned int var_10 = 89383632U;
unsigned long long int var_11 = 15341045788378561130ULL;
unsigned char var_14 = (unsigned char)215;
unsigned int var_15 = 3301163875U;
unsigned int var_16 = 1502421182U;
unsigned int var_18 = 1350579020U;
int zero = 0;
unsigned char var_20 = (unsigned char)183;
unsigned int var_21 = 122941847U;
short var_22 = (short)14533;
signed char var_23 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
