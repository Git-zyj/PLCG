#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 464419206;
signed char var_3 = (signed char)-80;
unsigned long long int var_7 = 4752006438680433534ULL;
unsigned long long int var_9 = 3564803154023153623ULL;
unsigned long long int var_10 = 8673035398202086030ULL;
unsigned char var_14 = (unsigned char)206;
int zero = 0;
unsigned int var_18 = 1310619355U;
signed char var_19 = (signed char)-10;
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
