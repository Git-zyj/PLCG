#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -982825232;
unsigned int var_1 = 1497579112U;
short var_2 = (short)-13779;
unsigned long long int var_3 = 7959505448334498016ULL;
long long int var_4 = -6675136119739704706LL;
long long int var_5 = 9081755419146320393LL;
unsigned int var_8 = 1460767342U;
signed char var_9 = (signed char)60;
int zero = 0;
short var_11 = (short)32572;
unsigned int var_12 = 878742224U;
signed char var_13 = (signed char)-28;
void init() {
}

void checksum() {
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
