#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)47;
short var_4 = (short)-26972;
int var_5 = 407534933;
unsigned char var_6 = (unsigned char)94;
signed char var_10 = (signed char)-89;
unsigned char var_14 = (unsigned char)17;
signed char var_17 = (signed char)59;
int zero = 0;
unsigned int var_20 = 131258130U;
signed char var_21 = (signed char)-9;
unsigned char var_22 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
