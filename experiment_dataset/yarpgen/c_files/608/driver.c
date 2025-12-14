#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -993761758914690291LL;
short var_2 = (short)1953;
int var_5 = -1169309906;
signed char var_6 = (signed char)67;
unsigned long long int var_7 = 6078960814930675251ULL;
long long int var_8 = -4578769237759989562LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 4348523109551862139ULL;
unsigned int var_12 = 1568305772U;
unsigned long long int var_13 = 603018879569851395ULL;
int var_14 = 111768416;
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
