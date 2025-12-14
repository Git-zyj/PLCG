#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1763657409780293801ULL;
signed char var_1 = (signed char)-18;
short var_2 = (short)-18302;
short var_3 = (short)-19879;
unsigned short var_9 = (unsigned short)19835;
signed char var_10 = (signed char)80;
int zero = 0;
unsigned int var_11 = 1557423681U;
unsigned short var_12 = (unsigned short)20981;
unsigned int var_13 = 1335750058U;
unsigned short var_14 = (unsigned short)59695;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
