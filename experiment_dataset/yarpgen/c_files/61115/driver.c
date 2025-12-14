#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
unsigned short var_1 = (unsigned short)62928;
unsigned int var_3 = 793685196U;
short var_5 = (short)582;
unsigned int var_9 = 367044011U;
long long int var_10 = 2024725136392213198LL;
unsigned short var_11 = (unsigned short)39551;
unsigned short var_13 = (unsigned short)10879;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 18165177968273876927ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
