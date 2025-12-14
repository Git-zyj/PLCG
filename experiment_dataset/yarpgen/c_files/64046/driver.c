#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)81;
int var_1 = 985006380;
unsigned int var_2 = 4159426355U;
unsigned int var_5 = 1374631871U;
signed char var_7 = (signed char)-114;
int var_11 = -651186607;
int zero = 0;
unsigned char var_13 = (unsigned char)31;
unsigned long long int var_14 = 4005042855462679235ULL;
_Bool var_15 = (_Bool)1;
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
