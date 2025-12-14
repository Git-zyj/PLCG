#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
unsigned char var_1 = (unsigned char)90;
short var_2 = (short)31452;
long long int var_4 = -6699144040063513321LL;
unsigned int var_6 = 881855159U;
short var_11 = (short)-29691;
short var_12 = (short)-10799;
unsigned short var_14 = (unsigned short)9320;
unsigned short var_15 = (unsigned short)9100;
int zero = 0;
unsigned char var_16 = (unsigned char)209;
unsigned short var_17 = (unsigned short)3069;
long long int var_18 = -7265607265019212943LL;
short var_19 = (short)-29095;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
