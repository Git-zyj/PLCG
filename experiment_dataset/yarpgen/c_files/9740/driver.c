#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2943683581U;
unsigned long long int var_2 = 1205642141727940322ULL;
signed char var_6 = (signed char)-127;
short var_8 = (short)26229;
long long int var_11 = -7615352473209693940LL;
long long int var_12 = -984827791247872475LL;
unsigned char var_14 = (unsigned char)12;
unsigned char var_15 = (unsigned char)25;
int zero = 0;
unsigned short var_16 = (unsigned short)29486;
unsigned long long int var_17 = 16270617809888547673ULL;
signed char var_18 = (signed char)76;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
