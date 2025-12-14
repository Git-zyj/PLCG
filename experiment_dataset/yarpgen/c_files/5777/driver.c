#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1147055846;
unsigned int var_9 = 2057992563U;
unsigned short var_11 = (unsigned short)49138;
unsigned long long int var_13 = 7917817907058209769ULL;
int var_14 = -1302208339;
unsigned long long int var_17 = 2818216796942732365ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)55;
unsigned char var_19 = (unsigned char)142;
void init() {
}

void checksum() {
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
