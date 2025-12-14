#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17007794080144962018ULL;
short var_4 = (short)-24586;
unsigned long long int var_9 = 8537328619415282351ULL;
int zero = 0;
long long int var_10 = 4793674732867324539LL;
unsigned short var_11 = (unsigned short)24980;
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
