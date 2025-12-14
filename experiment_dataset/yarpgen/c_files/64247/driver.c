#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)1;
unsigned long long int var_3 = 8186136335819739725ULL;
short var_4 = (short)-5726;
unsigned int var_9 = 4059957609U;
unsigned int var_10 = 984116160U;
unsigned char var_11 = (unsigned char)159;
int zero = 0;
signed char var_13 = (signed char)16;
int var_14 = 849916466;
void init() {
}

void checksum() {
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
