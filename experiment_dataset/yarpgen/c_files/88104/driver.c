#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3304849767U;
signed char var_4 = (signed char)-103;
signed char var_5 = (signed char)35;
signed char var_6 = (signed char)126;
unsigned short var_7 = (unsigned short)30489;
unsigned short var_10 = (unsigned short)57972;
unsigned long long int var_15 = 10481399767023909562ULL;
int var_16 = 2008026624;
int zero = 0;
unsigned char var_19 = (unsigned char)231;
short var_20 = (short)23226;
unsigned long long int var_21 = 12455591232494777821ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
