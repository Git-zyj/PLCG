#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 37393183274966088LL;
unsigned short var_9 = (unsigned short)44454;
unsigned short var_10 = (unsigned short)29078;
int var_12 = 835514916;
int zero = 0;
signed char var_18 = (signed char)33;
signed char var_19 = (signed char)79;
unsigned int var_20 = 3163251096U;
int var_21 = -1696008520;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
