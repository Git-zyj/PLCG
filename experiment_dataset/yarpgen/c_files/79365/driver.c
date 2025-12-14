#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -575934196;
signed char var_2 = (signed char)78;
unsigned char var_3 = (unsigned char)5;
signed char var_6 = (signed char)124;
unsigned long long int var_7 = 4957191891235648730ULL;
long long int var_9 = -6803346909594960065LL;
unsigned long long int var_11 = 53525498848672482ULL;
short var_13 = (short)19976;
unsigned long long int var_16 = 9067966066453847414ULL;
unsigned int var_17 = 1824480005U;
unsigned long long int var_18 = 12236413411704994736ULL;
int zero = 0;
signed char var_20 = (signed char)115;
unsigned short var_21 = (unsigned short)36751;
short var_22 = (short)-4413;
short var_23 = (short)17965;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
