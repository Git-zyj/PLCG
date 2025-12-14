#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-117;
unsigned char var_3 = (unsigned char)66;
unsigned long long int var_4 = 13524621951791428864ULL;
unsigned int var_5 = 3668710536U;
signed char var_6 = (signed char)-40;
unsigned int var_7 = 2356003126U;
unsigned char var_10 = (unsigned char)150;
int var_11 = -1338548587;
long long int var_14 = 2175823407926670445LL;
signed char var_15 = (signed char)90;
int zero = 0;
unsigned char var_16 = (unsigned char)21;
unsigned char var_17 = (unsigned char)98;
unsigned short var_18 = (unsigned short)57700;
unsigned char var_19 = (unsigned char)101;
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
