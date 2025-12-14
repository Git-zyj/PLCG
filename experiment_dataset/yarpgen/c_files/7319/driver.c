#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1664;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 2763749320U;
unsigned int var_9 = 1208388433U;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)156;
unsigned short var_20 = (unsigned short)27217;
void init() {
}

void checksum() {
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
