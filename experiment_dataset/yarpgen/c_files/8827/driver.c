#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8741557643566017223LL;
short var_1 = (short)10966;
long long int var_2 = -7170750751445117448LL;
unsigned short var_4 = (unsigned short)48921;
signed char var_5 = (signed char)118;
short var_7 = (short)-18955;
signed char var_8 = (signed char)35;
unsigned short var_11 = (unsigned short)57345;
int zero = 0;
unsigned char var_13 = (unsigned char)153;
unsigned int var_14 = 3404748509U;
unsigned int var_15 = 567475537U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
