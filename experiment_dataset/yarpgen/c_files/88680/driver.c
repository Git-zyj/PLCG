#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-20;
long long int var_1 = -2744921989927196734LL;
_Bool var_2 = (_Bool)1;
long long int var_4 = -8518760731594429808LL;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)138;
signed char var_12 = (signed char)124;
unsigned char var_13 = (unsigned char)232;
void init() {
}

void checksum() {
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
