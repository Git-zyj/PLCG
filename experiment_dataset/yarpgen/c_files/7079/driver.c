#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)17;
unsigned short var_7 = (unsigned short)59321;
unsigned long long int var_15 = 5913097468477479642ULL;
unsigned int var_16 = 1105773248U;
int zero = 0;
signed char var_18 = (signed char)39;
long long int var_19 = 5769663212803780802LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
