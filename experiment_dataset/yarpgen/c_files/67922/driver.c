#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1684;
unsigned char var_3 = (unsigned char)224;
unsigned short var_4 = (unsigned short)62089;
int var_9 = 1388623812;
unsigned int var_10 = 633961689U;
signed char var_16 = (signed char)-45;
unsigned short var_18 = (unsigned short)52639;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)60;
signed char var_22 = (signed char)-32;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
