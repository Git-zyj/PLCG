#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)0;
signed char var_5 = (signed char)-105;
long long int var_6 = -4973021464924038116LL;
unsigned short var_9 = (unsigned short)61412;
int zero = 0;
unsigned short var_10 = (unsigned short)49068;
int var_11 = 1453628124;
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
