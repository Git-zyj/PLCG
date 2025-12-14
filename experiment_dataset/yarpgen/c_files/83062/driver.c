#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)3;
unsigned long long int var_2 = 16432087959983339828ULL;
_Bool var_7 = (_Bool)1;
int var_8 = 1315777389;
signed char var_9 = (signed char)-71;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3145820902U;
int zero = 0;
unsigned int var_14 = 3024067961U;
long long int var_15 = -875819648556181677LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
