#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)156;
unsigned char var_3 = (unsigned char)199;
unsigned int var_4 = 716359088U;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
long long int var_9 = -327946835617795954LL;
signed char var_10 = (signed char)-29;
int zero = 0;
unsigned short var_11 = (unsigned short)60191;
int var_12 = 581390034;
void init() {
}

void checksum() {
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
