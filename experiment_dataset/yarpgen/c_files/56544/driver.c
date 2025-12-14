#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -576427591;
long long int var_3 = 6039744698165779282LL;
signed char var_4 = (signed char)-54;
unsigned char var_5 = (unsigned char)131;
unsigned char var_6 = (unsigned char)56;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)182;
unsigned int var_12 = 1209439054U;
int zero = 0;
unsigned char var_13 = (unsigned char)41;
long long int var_14 = -706226398107358170LL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-27856;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
