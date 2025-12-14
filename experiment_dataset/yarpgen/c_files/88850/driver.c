#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-96;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)-15;
signed char var_8 = (signed char)-127;
unsigned short var_10 = (unsigned short)9403;
signed char var_11 = (signed char)91;
unsigned int var_12 = 4268874945U;
long long int var_19 = -772008401766382427LL;
int zero = 0;
int var_20 = -1467860708;
unsigned long long int var_21 = 5142794365006422250ULL;
unsigned long long int var_22 = 13050830087750946577ULL;
void init() {
}

void checksum() {
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
