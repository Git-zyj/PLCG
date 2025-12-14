#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -8966459405093898621LL;
unsigned char var_6 = (unsigned char)14;
unsigned long long int var_7 = 3472899660717791997ULL;
long long int var_8 = 7000504888656776454LL;
signed char var_16 = (signed char)-20;
int zero = 0;
unsigned short var_20 = (unsigned short)59910;
signed char var_21 = (signed char)34;
void init() {
}

void checksum() {
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
