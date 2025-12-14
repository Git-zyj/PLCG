#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62377;
_Bool var_2 = (_Bool)0;
unsigned int var_13 = 995457271U;
unsigned char var_17 = (unsigned char)148;
int zero = 0;
unsigned char var_18 = (unsigned char)188;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
