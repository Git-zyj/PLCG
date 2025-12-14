#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15443752994107604013ULL;
unsigned char var_1 = (unsigned char)255;
_Bool var_3 = (_Bool)0;
signed char var_7 = (signed char)-6;
_Bool var_9 = (_Bool)1;
int var_17 = -1263020258;
unsigned short var_19 = (unsigned short)42938;
int zero = 0;
unsigned char var_20 = (unsigned char)234;
unsigned short var_21 = (unsigned short)26381;
unsigned int var_22 = 3774149301U;
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
