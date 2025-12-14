#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3617975972118138357ULL;
unsigned short var_2 = (unsigned short)65220;
long long int var_3 = 4525518319455267895LL;
unsigned char var_10 = (unsigned char)229;
_Bool var_11 = (_Bool)0;
unsigned long long int var_14 = 4202562454357792564ULL;
unsigned char var_16 = (unsigned char)162;
int zero = 0;
unsigned short var_17 = (unsigned short)10477;
int var_18 = 173177990;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
