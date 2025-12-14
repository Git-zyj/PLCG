#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
unsigned short var_1 = (unsigned short)3872;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)66;
short var_6 = (short)-26528;
long long int var_7 = -6532319730793100402LL;
signed char var_9 = (signed char)25;
int zero = 0;
long long int var_11 = -2534503611670403618LL;
unsigned int var_12 = 2237950151U;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)210;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
