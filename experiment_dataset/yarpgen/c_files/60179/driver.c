#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6270965964810446641LL;
_Bool var_1 = (_Bool)0;
int var_3 = -1152809785;
_Bool var_4 = (_Bool)1;
long long int var_5 = 1653041005676521098LL;
long long int var_6 = 6573317368004832820LL;
short var_12 = (short)-21819;
unsigned int var_15 = 486461206U;
int var_16 = 61399347;
int var_17 = -1941779802;
unsigned short var_18 = (unsigned short)57084;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)79;
int var_21 = -2965408;
long long int var_22 = -8465542280524445692LL;
int var_23 = -2083450481;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
