#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)85;
signed char var_1 = (signed char)-40;
unsigned int var_2 = 1126540094U;
short var_4 = (short)6335;
unsigned long long int var_5 = 18035093882232495913ULL;
int var_7 = -775893680;
unsigned char var_10 = (unsigned char)192;
int zero = 0;
short var_11 = (short)1494;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)79;
short var_14 = (short)28569;
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
