#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-60;
signed char var_5 = (signed char)85;
short var_6 = (short)-21577;
long long int var_8 = 5707301153541989919LL;
unsigned char var_10 = (unsigned char)245;
int zero = 0;
unsigned short var_15 = (unsigned short)40187;
unsigned int var_16 = 4036843776U;
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
