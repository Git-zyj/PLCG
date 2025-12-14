#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1756938494;
unsigned char var_2 = (unsigned char)157;
short var_5 = (short)-8365;
signed char var_9 = (signed char)33;
short var_12 = (short)28641;
int var_13 = 29359023;
int zero = 0;
unsigned char var_19 = (unsigned char)124;
unsigned long long int var_20 = 13150765609065666939ULL;
long long int var_21 = 4560400185872254215LL;
int var_22 = -882906332;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
