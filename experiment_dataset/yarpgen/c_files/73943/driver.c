#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-30979;
unsigned int var_4 = 3285285658U;
int var_5 = -1721680953;
short var_7 = (short)-7423;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_10 = -7788594441535298040LL;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
