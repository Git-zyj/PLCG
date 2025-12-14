#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)252;
int var_4 = 1035508957;
unsigned int var_5 = 4271857074U;
unsigned short var_13 = (unsigned short)57248;
int zero = 0;
unsigned int var_20 = 365637388U;
long long int var_21 = -4130205354529900353LL;
void init() {
}

void checksum() {
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
