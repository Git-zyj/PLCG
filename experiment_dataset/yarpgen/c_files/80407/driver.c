#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9586;
int var_1 = -955435005;
unsigned long long int var_6 = 626997881792986943ULL;
int var_9 = 2107658473;
long long int var_10 = 7774212289439364487LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 2855945247U;
unsigned long long int var_14 = 10522887499159752018ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
