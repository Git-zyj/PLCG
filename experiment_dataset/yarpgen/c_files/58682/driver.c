#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17365019045080451928ULL;
signed char var_2 = (signed char)123;
unsigned char var_4 = (unsigned char)187;
long long int var_5 = 4537946248199751439LL;
int var_6 = -1559552135;
unsigned char var_7 = (unsigned char)107;
unsigned int var_8 = 920631054U;
int var_11 = 95546926;
unsigned int var_12 = 26724357U;
unsigned int var_13 = 1753191860U;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)88;
unsigned char var_16 = (unsigned char)152;
int var_17 = 1660526217;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
