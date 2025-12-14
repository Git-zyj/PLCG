#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18016;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 6739635191276169685ULL;
unsigned int var_8 = 734005184U;
unsigned short var_9 = (unsigned short)50662;
int var_10 = 1292700416;
unsigned long long int var_15 = 16815005929747640220ULL;
short var_16 = (short)-20766;
int zero = 0;
long long int var_20 = -6546629903395609956LL;
unsigned char var_21 = (unsigned char)96;
_Bool var_22 = (_Bool)1;
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
