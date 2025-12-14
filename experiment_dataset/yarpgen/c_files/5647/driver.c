#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16825;
long long int var_4 = 7721160691586763503LL;
signed char var_6 = (signed char)-44;
unsigned char var_12 = (unsigned char)42;
_Bool var_13 = (_Bool)1;
unsigned long long int var_17 = 16225088370422801839ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-26;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
