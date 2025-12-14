#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48056;
int var_1 = -605154011;
long long int var_2 = -8304059430843177884LL;
int var_3 = -2081906319;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 247010372016075986ULL;
unsigned char var_7 = (unsigned char)122;
unsigned long long int var_8 = 8972601814686421362ULL;
unsigned int var_9 = 3449590608U;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)13075;
unsigned long long int var_13 = 7450122103981259270ULL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)110;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
