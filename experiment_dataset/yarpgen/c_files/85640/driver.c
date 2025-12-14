#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5141781433828356730ULL;
signed char var_3 = (signed char)-68;
_Bool var_8 = (_Bool)0;
short var_16 = (short)-16897;
unsigned int var_17 = 2701702130U;
int zero = 0;
signed char var_20 = (signed char)19;
long long int var_21 = -8710063055531100549LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
