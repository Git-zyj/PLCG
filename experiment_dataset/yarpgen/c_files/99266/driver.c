#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7653781346660836657LL;
_Bool var_2 = (_Bool)0;
signed char var_8 = (signed char)24;
long long int var_13 = 1042045620958314900LL;
unsigned char var_14 = (unsigned char)217;
int zero = 0;
int var_15 = -897923709;
signed char var_16 = (signed char)-122;
unsigned int var_17 = 38672865U;
long long int var_18 = -1425085426855069885LL;
unsigned int var_19 = 2493150428U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
