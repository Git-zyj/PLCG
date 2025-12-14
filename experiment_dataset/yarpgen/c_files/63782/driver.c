#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1223886179;
unsigned int var_3 = 4070164028U;
unsigned char var_5 = (unsigned char)155;
int zero = 0;
long long int var_19 = -394163359795248690LL;
long long int var_20 = -8541725255354630087LL;
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
