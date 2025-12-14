#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)180;
signed char var_3 = (signed char)108;
unsigned int var_4 = 591370251U;
int var_5 = 2095702985;
unsigned char var_6 = (unsigned char)245;
unsigned char var_8 = (unsigned char)157;
long long int var_10 = 6267614796691195001LL;
short var_11 = (short)6265;
signed char var_12 = (signed char)-125;
int zero = 0;
long long int var_16 = 6565851511909712555LL;
unsigned short var_17 = (unsigned short)7182;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
