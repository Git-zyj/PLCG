#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5204273263907793309LL;
long long int var_3 = 5827109362389535093LL;
unsigned char var_7 = (unsigned char)160;
unsigned char var_9 = (unsigned char)91;
int zero = 0;
unsigned char var_10 = (unsigned char)27;
unsigned short var_11 = (unsigned short)63916;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
