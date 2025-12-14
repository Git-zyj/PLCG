#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1995011041;
unsigned int var_2 = 1552209312U;
int var_3 = 1158521073;
unsigned char var_4 = (unsigned char)203;
long long int var_5 = -5828691169252530122LL;
long long int var_6 = 2008851102975122532LL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)62352;
int zero = 0;
unsigned int var_15 = 1466350845U;
signed char var_16 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
