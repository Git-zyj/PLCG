#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9133338458819441152LL;
unsigned short var_1 = (unsigned short)31194;
unsigned char var_8 = (unsigned char)41;
unsigned char var_9 = (unsigned char)252;
unsigned int var_10 = 1016264682U;
int zero = 0;
unsigned long long int var_12 = 13798631035256976902ULL;
long long int var_13 = -2014565261220884784LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
