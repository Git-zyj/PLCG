#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-605;
long long int var_2 = 6385469360212692128LL;
int var_3 = 830097969;
unsigned int var_5 = 1676285572U;
unsigned short var_6 = (unsigned short)35759;
unsigned int var_7 = 1773902861U;
unsigned char var_8 = (unsigned char)5;
signed char var_9 = (signed char)-125;
unsigned short var_11 = (unsigned short)27119;
_Bool var_16 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 2915192273U;
short var_21 = (short)-8839;
unsigned char var_22 = (unsigned char)109;
unsigned char var_23 = (unsigned char)66;
unsigned short var_24 = (unsigned short)31124;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
