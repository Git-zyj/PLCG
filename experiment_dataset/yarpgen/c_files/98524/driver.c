#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1192948333;
_Bool var_2 = (_Bool)1;
int var_4 = -1349214572;
unsigned int var_5 = 797984211U;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)221;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -1581849023;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
