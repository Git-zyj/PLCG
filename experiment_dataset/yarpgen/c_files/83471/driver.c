#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1614585360U;
signed char var_3 = (signed char)27;
unsigned char var_5 = (unsigned char)183;
unsigned int var_6 = 2720863511U;
unsigned char var_7 = (unsigned char)153;
long long int var_8 = 1223573844778494970LL;
unsigned short var_10 = (unsigned short)56570;
long long int var_12 = 2785167121650801784LL;
int zero = 0;
unsigned char var_15 = (unsigned char)137;
int var_16 = -1246837259;
long long int var_17 = 9190947983637114117LL;
int var_18 = -374233576;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
