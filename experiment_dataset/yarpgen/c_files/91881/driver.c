#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7008;
signed char var_1 = (signed char)-90;
short var_8 = (short)12322;
signed char var_9 = (signed char)83;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)75;
int var_13 = 347368296;
void init() {
}

void checksum() {
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
