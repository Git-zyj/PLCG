#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7479765443180478341ULL;
short var_8 = (short)-17469;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)22;
unsigned int var_11 = 2729846927U;
unsigned int var_12 = 2933770719U;
unsigned char var_14 = (unsigned char)192;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 4183933246U;
unsigned int var_18 = 3903446173U;
unsigned int var_19 = 4047816090U;
short var_20 = (short)6715;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
