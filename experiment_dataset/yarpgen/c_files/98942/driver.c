#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)20637;
unsigned int var_8 = 2752408734U;
unsigned char var_10 = (unsigned char)85;
int var_11 = 905615655;
int var_12 = 458252187;
short var_13 = (short)-3270;
unsigned char var_14 = (unsigned char)103;
int zero = 0;
short var_15 = (short)-367;
_Bool var_16 = (_Bool)0;
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
