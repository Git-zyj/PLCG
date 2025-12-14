#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10873500730553257450ULL;
short var_1 = (short)-20033;
unsigned short var_2 = (unsigned short)23214;
signed char var_3 = (signed char)-102;
short var_4 = (short)-31014;
signed char var_5 = (signed char)52;
unsigned int var_7 = 3089177965U;
unsigned int var_9 = 758886953U;
int zero = 0;
unsigned int var_10 = 712334271U;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
