#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -1373756859175128410LL;
unsigned char var_3 = (unsigned char)203;
unsigned long long int var_4 = 16573544979089452125ULL;
unsigned int var_14 = 433815082U;
unsigned int var_15 = 4138465517U;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_19 = (short)6058;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
