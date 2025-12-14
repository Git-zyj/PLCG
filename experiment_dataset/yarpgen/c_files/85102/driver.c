#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 216017329U;
_Bool var_2 = (_Bool)1;
long long int var_3 = 8375320589627350734LL;
unsigned long long int var_4 = 12744200178900647001ULL;
short var_5 = (short)28822;
unsigned long long int var_6 = 5898453523337469791ULL;
long long int var_7 = -2939757293564534183LL;
int var_8 = 906477973;
signed char var_9 = (signed char)-4;
signed char var_10 = (signed char)124;
int zero = 0;
long long int var_11 = -746368042550747663LL;
unsigned short var_12 = (unsigned short)19702;
unsigned long long int var_13 = 9999174203997489306ULL;
_Bool var_14 = (_Bool)1;
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
