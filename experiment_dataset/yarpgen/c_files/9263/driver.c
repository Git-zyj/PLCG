#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27074;
long long int var_2 = 8005706287736243590LL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)121;
long long int var_7 = 8180176081960886692LL;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)68;
unsigned char var_11 = (unsigned char)125;
unsigned int var_13 = 1592155736U;
int zero = 0;
unsigned int var_14 = 2441875680U;
short var_15 = (short)-15369;
int var_16 = 1313611602;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
