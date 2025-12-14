#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27017;
unsigned short var_3 = (unsigned short)15414;
unsigned short var_4 = (unsigned short)26000;
unsigned short var_5 = (unsigned short)35136;
unsigned long long int var_6 = 15452111084918236333ULL;
short var_7 = (short)-1074;
short var_8 = (short)176;
int var_9 = -1131708839;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)24424;
unsigned short var_12 = (unsigned short)12622;
signed char var_13 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
