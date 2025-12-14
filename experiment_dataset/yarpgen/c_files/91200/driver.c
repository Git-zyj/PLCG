#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)26;
signed char var_6 = (signed char)-39;
signed char var_10 = (signed char)-63;
int var_14 = 1325961010;
long long int var_16 = 1067079080905881736LL;
long long int var_17 = -3744211785779394155LL;
int zero = 0;
short var_20 = (short)6824;
short var_21 = (short)-3380;
short var_22 = (short)13129;
int var_23 = 614626888;
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
