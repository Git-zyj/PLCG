#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)221;
signed char var_2 = (signed char)-116;
unsigned long long int var_5 = 13926883196913395313ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)92;
int var_10 = 1089855836;
unsigned long long int var_16 = 3163785420553954543ULL;
unsigned char var_18 = (unsigned char)176;
unsigned short var_19 = (unsigned short)3109;
int zero = 0;
int var_20 = 800797826;
unsigned long long int var_21 = 8593105052695655510ULL;
unsigned char var_22 = (unsigned char)241;
unsigned short var_23 = (unsigned short)16213;
unsigned char var_24 = (unsigned char)198;
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
