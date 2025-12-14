#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)229;
long long int var_3 = -8366495879478155080LL;
unsigned short var_6 = (unsigned short)3848;
unsigned short var_12 = (unsigned short)63496;
signed char var_13 = (signed char)68;
unsigned short var_14 = (unsigned short)8021;
signed char var_18 = (signed char)-46;
int zero = 0;
signed char var_19 = (signed char)-96;
unsigned short var_20 = (unsigned short)41003;
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
