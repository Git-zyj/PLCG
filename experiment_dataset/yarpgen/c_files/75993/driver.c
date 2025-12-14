#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2146164134;
short var_2 = (short)23402;
signed char var_3 = (signed char)94;
signed char var_5 = (signed char)-33;
unsigned int var_8 = 3723438733U;
int var_9 = 1267761467;
unsigned short var_11 = (unsigned short)47933;
unsigned int var_14 = 1318821299U;
int zero = 0;
unsigned char var_19 = (unsigned char)70;
long long int var_20 = 4529489349237505006LL;
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
