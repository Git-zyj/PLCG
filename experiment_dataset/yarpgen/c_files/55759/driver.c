#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -9221840444985866531LL;
unsigned int var_5 = 826908830U;
unsigned int var_8 = 638794850U;
long long int var_10 = -1045204816925172798LL;
_Bool var_12 = (_Bool)0;
short var_16 = (short)20296;
int var_17 = 2114662831;
int zero = 0;
unsigned char var_18 = (unsigned char)10;
unsigned char var_19 = (unsigned char)199;
void init() {
}

void checksum() {
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
