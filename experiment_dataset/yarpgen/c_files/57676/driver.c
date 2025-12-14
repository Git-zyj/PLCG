#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)23;
signed char var_13 = (signed char)-37;
signed char var_18 = (signed char)120;
int zero = 0;
short var_20 = (short)-2000;
long long int var_21 = -928061879243495973LL;
unsigned long long int var_22 = 10328924578636870780ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
