#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-24;
unsigned int var_6 = 1957237024U;
unsigned char var_7 = (unsigned char)70;
_Bool var_8 = (_Bool)1;
int zero = 0;
int var_10 = 1139649502;
unsigned long long int var_11 = 2198112345938269055ULL;
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
