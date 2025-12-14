#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 13080384171271780630ULL;
unsigned long long int var_13 = 9083805276246157662ULL;
unsigned long long int var_14 = 631247292910762782ULL;
unsigned short var_15 = (unsigned short)38317;
long long int var_16 = -5506498732415533920LL;
long long int var_17 = 2528369188214783967LL;
int zero = 0;
unsigned char var_18 = (unsigned char)41;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)68;
int var_21 = 742205806;
signed char var_22 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
