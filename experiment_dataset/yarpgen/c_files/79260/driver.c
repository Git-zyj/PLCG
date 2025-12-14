#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)68;
unsigned char var_3 = (unsigned char)74;
unsigned char var_4 = (unsigned char)252;
long long int var_5 = -6977595906550709255LL;
unsigned short var_6 = (unsigned short)40483;
unsigned int var_7 = 3358989198U;
unsigned int var_9 = 251389125U;
int zero = 0;
unsigned int var_10 = 773800934U;
unsigned char var_11 = (unsigned char)181;
signed char var_12 = (signed char)2;
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
