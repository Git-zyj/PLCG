#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1633412357;
signed char var_3 = (signed char)22;
short var_5 = (short)-19509;
signed char var_6 = (signed char)35;
long long int var_9 = 1241682916485382893LL;
int zero = 0;
int var_13 = -1648893005;
unsigned char var_14 = (unsigned char)225;
long long int var_15 = 6714144453585146017LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
