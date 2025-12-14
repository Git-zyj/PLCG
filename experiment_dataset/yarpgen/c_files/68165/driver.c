#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 18369757675061569786ULL;
int var_2 = 1493183945;
long long int var_4 = 4744335025985282518LL;
short var_5 = (short)8670;
unsigned short var_7 = (unsigned short)895;
long long int var_8 = -406568601923854958LL;
int zero = 0;
signed char var_10 = (signed char)79;
unsigned long long int var_11 = 3980498049262957065ULL;
short var_12 = (short)-24205;
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
