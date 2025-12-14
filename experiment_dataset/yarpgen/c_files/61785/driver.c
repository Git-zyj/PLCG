#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)202;
unsigned short var_1 = (unsigned short)42634;
unsigned short var_9 = (unsigned short)27943;
unsigned int var_10 = 4105221590U;
int var_11 = -494353645;
int zero = 0;
int var_13 = 2084132578;
unsigned int var_14 = 2620563505U;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1675818787U;
unsigned char var_17 = (unsigned char)72;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
