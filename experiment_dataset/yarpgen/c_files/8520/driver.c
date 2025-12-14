#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8909;
_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)83;
unsigned long long int var_11 = 17165406552385107290ULL;
short var_14 = (short)-19697;
unsigned long long int var_15 = 11795274980735809974ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)38588;
unsigned long long int var_18 = 777576436337810193ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
