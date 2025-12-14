#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)31;
_Bool var_1 = (_Bool)1;
signed char var_5 = (signed char)73;
unsigned short var_6 = (unsigned short)58079;
unsigned long long int var_7 = 17063803485797064092ULL;
int var_9 = -375158328;
int zero = 0;
unsigned long long int var_10 = 18369669211546750748ULL;
int var_11 = 1070935767;
unsigned int var_12 = 3351782549U;
int var_13 = -822660422;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
