#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)44581;
unsigned short var_6 = (unsigned short)31375;
unsigned char var_10 = (unsigned char)1;
unsigned long long int var_13 = 7148170554662936630ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)65;
unsigned int var_16 = 128186402U;
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
