#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)94;
_Bool var_5 = (_Bool)0;
unsigned int var_10 = 1055456689U;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 8743196063002865641ULL;
unsigned long long int var_21 = 16840410066844845878ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
