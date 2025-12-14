#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26274;
unsigned short var_4 = (unsigned short)20835;
short var_7 = (short)28841;
unsigned int var_9 = 2818933914U;
long long int var_13 = 2117532183167737037LL;
int var_17 = -1300164573;
int zero = 0;
unsigned char var_19 = (unsigned char)60;
unsigned short var_20 = (unsigned short)36543;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
