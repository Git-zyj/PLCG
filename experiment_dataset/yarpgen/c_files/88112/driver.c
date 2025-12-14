#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8894860856307901913ULL;
signed char var_1 = (signed char)-20;
short var_3 = (short)-31951;
unsigned long long int var_7 = 7328786188045830043ULL;
short var_9 = (short)-22129;
unsigned int var_10 = 1342605738U;
int zero = 0;
unsigned short var_11 = (unsigned short)49937;
long long int var_12 = -3006216005441612588LL;
short var_13 = (short)14557;
short var_14 = (short)19756;
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
