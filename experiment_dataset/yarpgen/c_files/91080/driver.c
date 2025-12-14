#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)226;
signed char var_5 = (signed char)-67;
short var_6 = (short)-2911;
unsigned char var_8 = (unsigned char)32;
unsigned int var_9 = 162027040U;
int zero = 0;
unsigned long long int var_13 = 9278746944984362661ULL;
unsigned short var_14 = (unsigned short)53007;
unsigned long long int var_15 = 3897188369944309268ULL;
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
