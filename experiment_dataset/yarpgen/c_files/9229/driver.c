#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 922727347377435199ULL;
int var_9 = 1257114375;
unsigned long long int var_10 = 17236603907870736292ULL;
short var_12 = (short)24411;
int var_14 = 961893479;
signed char var_16 = (signed char)11;
int zero = 0;
unsigned int var_17 = 2940678842U;
unsigned char var_18 = (unsigned char)173;
unsigned long long int var_19 = 7155079130575247015ULL;
short var_20 = (short)17277;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
