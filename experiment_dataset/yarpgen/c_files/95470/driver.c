#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 20109692;
short var_1 = (short)-30844;
unsigned short var_5 = (unsigned short)15257;
unsigned short var_8 = (unsigned short)14572;
int var_9 = 969939690;
unsigned int var_11 = 2785225430U;
int var_14 = 329387569;
int zero = 0;
unsigned short var_15 = (unsigned short)44515;
short var_16 = (short)-20978;
unsigned long long int var_17 = 5552868963285937350ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
