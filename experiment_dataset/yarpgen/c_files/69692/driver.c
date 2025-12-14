#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2012391464229311413LL;
unsigned char var_10 = (unsigned char)50;
long long int var_11 = 4709456197408468671LL;
unsigned int var_12 = 968676936U;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)45;
unsigned short var_19 = (unsigned short)29105;
unsigned char var_20 = (unsigned char)137;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
