#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)130;
unsigned char var_2 = (unsigned char)237;
signed char var_5 = (signed char)-71;
long long int var_6 = 1378624408545402414LL;
unsigned char var_7 = (unsigned char)227;
long long int var_8 = 911666333426460706LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-35;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int var_13 = 2014148766;
signed char var_14 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
