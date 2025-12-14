#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)66;
long long int var_1 = -8805989831486821268LL;
unsigned int var_2 = 3906098260U;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 1985577480579331842ULL;
unsigned int var_9 = 278405322U;
int zero = 0;
unsigned int var_11 = 2766714218U;
unsigned long long int var_12 = 18050319059622624279ULL;
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
