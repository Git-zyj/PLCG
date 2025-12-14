#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5084210995231419508LL;
long long int var_3 = 4131841848718069717LL;
unsigned char var_5 = (unsigned char)11;
long long int var_6 = -9014648498427709414LL;
unsigned long long int var_7 = 14621262769551432760ULL;
_Bool var_8 = (_Bool)0;
long long int var_9 = 7952555025668280750LL;
int var_10 = 903459971;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)52;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
