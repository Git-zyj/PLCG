#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53191;
long long int var_3 = 5702549900318421458LL;
short var_4 = (short)-13164;
unsigned short var_5 = (unsigned short)59262;
unsigned int var_6 = 3154958816U;
unsigned char var_7 = (unsigned char)250;
unsigned short var_8 = (unsigned short)55616;
signed char var_9 = (signed char)67;
unsigned long long int var_10 = 5326715040129258553ULL;
signed char var_13 = (signed char)14;
unsigned char var_14 = (unsigned char)226;
unsigned int var_15 = 4000738399U;
int zero = 0;
unsigned int var_16 = 1407893944U;
signed char var_17 = (signed char)-4;
unsigned short var_18 = (unsigned short)55500;
unsigned short var_19 = (unsigned short)57996;
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
