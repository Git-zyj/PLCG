#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)169;
unsigned short var_3 = (unsigned short)13138;
unsigned short var_6 = (unsigned short)53493;
_Bool var_8 = (_Bool)0;
int var_10 = -1273545359;
long long int var_11 = -6476708913847915966LL;
unsigned char var_13 = (unsigned char)144;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
