#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-20691;
unsigned int var_4 = 1597040116U;
unsigned long long int var_8 = 1749282399693384308ULL;
signed char var_9 = (signed char)-127;
unsigned int var_10 = 3853316071U;
unsigned int var_17 = 2665747382U;
int zero = 0;
long long int var_19 = -6212627423027688441LL;
short var_20 = (short)-18389;
unsigned char var_21 = (unsigned char)253;
unsigned char var_22 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
