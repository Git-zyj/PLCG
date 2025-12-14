#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)174;
unsigned long long int var_4 = 10551525754802516802ULL;
_Bool var_10 = (_Bool)1;
short var_15 = (short)28032;
int zero = 0;
unsigned int var_19 = 1435817085U;
short var_20 = (short)-19704;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-54;
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
