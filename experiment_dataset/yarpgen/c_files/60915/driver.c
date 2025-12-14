#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1477737199;
_Bool var_1 = (_Bool)1;
long long int var_2 = 1451558025597618193LL;
short var_3 = (short)-1734;
signed char var_4 = (signed char)-44;
unsigned int var_5 = 2085558580U;
_Bool var_6 = (_Bool)1;
long long int var_7 = 6312401703410649087LL;
short var_8 = (short)22680;
short var_9 = (short)32753;
int zero = 0;
long long int var_10 = 94293350450529215LL;
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
