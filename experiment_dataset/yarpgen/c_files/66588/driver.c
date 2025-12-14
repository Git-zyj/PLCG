#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12220878995745772959ULL;
unsigned char var_1 = (unsigned char)224;
short var_2 = (short)-14621;
unsigned short var_5 = (unsigned short)63786;
short var_7 = (short)12427;
short var_9 = (short)-15435;
int var_14 = -1121025232;
unsigned char var_15 = (unsigned char)40;
int zero = 0;
unsigned int var_17 = 1728307826U;
unsigned short var_18 = (unsigned short)29796;
unsigned short var_19 = (unsigned short)14468;
unsigned char var_20 = (unsigned char)181;
unsigned short var_21 = (unsigned short)29743;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
