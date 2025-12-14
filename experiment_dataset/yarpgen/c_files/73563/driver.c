#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3109438062U;
unsigned short var_2 = (unsigned short)32921;
unsigned long long int var_3 = 3142348105207977741ULL;
unsigned int var_4 = 3864696705U;
unsigned short var_5 = (unsigned short)54284;
unsigned long long int var_6 = 2126702065890707227ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-6103;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
