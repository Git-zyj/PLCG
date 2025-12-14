#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14322718798896462682ULL;
unsigned long long int var_8 = 12036496340128045321ULL;
unsigned long long int var_9 = 14843852706686199850ULL;
_Bool var_12 = (_Bool)0;
int var_14 = 1804274028;
unsigned long long int var_15 = 10164708494605102906ULL;
long long int var_18 = 2962023596708952832LL;
int zero = 0;
int var_20 = -1913045651;
long long int var_21 = -958110514551345921LL;
long long int var_22 = 2128118586194454085LL;
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
