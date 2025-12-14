#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)44540;
unsigned char var_9 = (unsigned char)76;
unsigned short var_13 = (unsigned short)47738;
unsigned short var_15 = (unsigned short)50010;
short var_17 = (short)5313;
int zero = 0;
signed char var_19 = (signed char)11;
unsigned int var_20 = 264136210U;
int var_21 = 917372538;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
