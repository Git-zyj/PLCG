#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18844;
unsigned short var_1 = (unsigned short)11367;
unsigned short var_3 = (unsigned short)53024;
unsigned int var_4 = 4042897395U;
unsigned short var_5 = (unsigned short)54163;
unsigned short var_6 = (unsigned short)62222;
unsigned short var_7 = (unsigned short)3467;
unsigned short var_8 = (unsigned short)60517;
unsigned short var_9 = (unsigned short)28439;
unsigned short var_10 = (unsigned short)9827;
unsigned short var_11 = (unsigned short)54487;
unsigned int var_12 = 1959220413U;
int zero = 0;
unsigned short var_13 = (unsigned short)2043;
unsigned short var_14 = (unsigned short)47679;
unsigned short var_15 = (unsigned short)52880;
unsigned short var_16 = (unsigned short)2158;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
