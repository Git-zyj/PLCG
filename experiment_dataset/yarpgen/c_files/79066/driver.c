#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)264;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 514995352U;
unsigned int var_6 = 3596184675U;
int var_9 = -59092794;
unsigned short var_10 = (unsigned short)6543;
unsigned char var_11 = (unsigned char)218;
signed char var_12 = (signed char)-82;
unsigned short var_13 = (unsigned short)58681;
int zero = 0;
short var_17 = (short)20854;
short var_18 = (short)17278;
int var_19 = 1439069388;
signed char var_20 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
