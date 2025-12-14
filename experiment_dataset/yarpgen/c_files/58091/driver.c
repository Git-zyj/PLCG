#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-105;
unsigned char var_1 = (unsigned char)55;
signed char var_2 = (signed char)33;
short var_3 = (short)31866;
long long int var_5 = -5759217534488604168LL;
unsigned char var_6 = (unsigned char)171;
short var_7 = (short)25398;
unsigned int var_8 = 3223828378U;
long long int var_9 = -174675554361714078LL;
int zero = 0;
unsigned short var_10 = (unsigned short)29240;
long long int var_11 = 1792144237871575525LL;
long long int var_12 = 9021758718978105811LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
