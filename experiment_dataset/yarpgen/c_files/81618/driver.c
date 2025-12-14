#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-25343;
unsigned int var_3 = 4179631970U;
unsigned long long int var_9 = 2422197694646651270ULL;
short var_13 = (short)-26531;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)227;
signed char var_20 = (signed char)-47;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)10749;
signed char var_23 = (signed char)-38;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
