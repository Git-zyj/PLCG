#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8454022304032345829LL;
unsigned int var_5 = 57842516U;
short var_6 = (short)-16134;
int var_9 = -768654455;
unsigned char var_15 = (unsigned char)254;
unsigned char var_18 = (unsigned char)80;
int zero = 0;
unsigned char var_19 = (unsigned char)176;
unsigned long long int var_20 = 1080594783627383644ULL;
unsigned short var_21 = (unsigned short)62922;
unsigned int var_22 = 3190189649U;
_Bool var_23 = (_Bool)0;
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
