#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2045327088U;
signed char var_1 = (signed char)-55;
unsigned int var_2 = 313917287U;
long long int var_3 = -4119011783127329430LL;
signed char var_6 = (signed char)-55;
unsigned char var_15 = (unsigned char)198;
unsigned char var_16 = (unsigned char)76;
long long int var_17 = -6489130669153919664LL;
int zero = 0;
unsigned int var_19 = 2691381763U;
unsigned char var_20 = (unsigned char)244;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
