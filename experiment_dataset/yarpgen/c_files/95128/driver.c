#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22633;
long long int var_5 = 673693365770470791LL;
long long int var_6 = 8618487368808123581LL;
signed char var_7 = (signed char)125;
int zero = 0;
unsigned char var_10 = (unsigned char)201;
int var_11 = 1823119855;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
