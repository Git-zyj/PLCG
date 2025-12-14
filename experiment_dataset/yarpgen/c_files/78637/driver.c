#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)198;
unsigned int var_2 = 2918079531U;
unsigned long long int var_5 = 16686218383439120450ULL;
long long int var_6 = 5627102982511148167LL;
unsigned char var_9 = (unsigned char)31;
int zero = 0;
short var_11 = (short)-23430;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
