#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)27122;
unsigned int var_8 = 1953577262U;
signed char var_9 = (signed char)76;
short var_10 = (short)-19604;
int zero = 0;
signed char var_13 = (signed char)-57;
long long int var_14 = -5267367511878355190LL;
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
