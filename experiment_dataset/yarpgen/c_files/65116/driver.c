#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1690187409;
unsigned short var_9 = (unsigned short)46105;
long long int var_12 = 1593780145192321229LL;
unsigned short var_14 = (unsigned short)36161;
int zero = 0;
unsigned long long int var_16 = 17616992545412927637ULL;
long long int var_17 = -3182031275352745672LL;
void init() {
}

void checksum() {
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
