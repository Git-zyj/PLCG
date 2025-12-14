#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)31;
short var_10 = (short)8680;
short var_13 = (short)-30244;
int zero = 0;
signed char var_20 = (signed char)102;
signed char var_21 = (signed char)-40;
unsigned long long int var_22 = 14651344228469873715ULL;
signed char var_23 = (signed char)92;
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
