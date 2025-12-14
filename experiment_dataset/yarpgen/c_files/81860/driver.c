#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 5068538765694131104LL;
unsigned short var_9 = (unsigned short)17087;
_Bool var_10 = (_Bool)1;
signed char var_17 = (signed char)100;
int zero = 0;
long long int var_20 = -3477380561440928352LL;
unsigned char var_21 = (unsigned char)242;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 6065062797428166506ULL;
int var_24 = -700650516;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
