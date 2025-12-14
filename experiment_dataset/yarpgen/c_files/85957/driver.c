#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43509;
unsigned long long int var_1 = 15938077259871814982ULL;
int var_2 = -490358225;
unsigned long long int var_4 = 3613485340117659249ULL;
int var_5 = -584550833;
unsigned long long int var_6 = 9854792567160763947ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 1371905300U;
int zero = 0;
unsigned int var_10 = 440334139U;
unsigned char var_11 = (unsigned char)203;
unsigned int var_12 = 1912463934U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
