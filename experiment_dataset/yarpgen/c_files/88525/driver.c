#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)207;
unsigned long long int var_5 = 18014083423305280631ULL;
unsigned long long int var_6 = 15625060038987366251ULL;
unsigned char var_10 = (unsigned char)123;
int zero = 0;
int var_11 = 1788719837;
long long int var_12 = 6384199457772310534LL;
unsigned int var_13 = 1021093898U;
int var_14 = 586628489;
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
