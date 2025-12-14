#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3145769978U;
long long int var_3 = 2564102337579909440LL;
unsigned short var_7 = (unsigned short)61995;
unsigned short var_8 = (unsigned short)21114;
signed char var_13 = (signed char)108;
signed char var_16 = (signed char)87;
int zero = 0;
unsigned long long int var_17 = 12141521502934619171ULL;
long long int var_18 = 1822517734852469831LL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
