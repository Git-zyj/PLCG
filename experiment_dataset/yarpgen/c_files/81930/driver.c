#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)140;
short var_3 = (short)20129;
unsigned short var_5 = (unsigned short)65138;
unsigned short var_6 = (unsigned short)336;
unsigned int var_10 = 1123102685U;
int zero = 0;
long long int var_11 = 8254149327753188012LL;
long long int var_12 = -5296762064819687855LL;
unsigned int var_13 = 1112956502U;
unsigned int var_14 = 551191974U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
