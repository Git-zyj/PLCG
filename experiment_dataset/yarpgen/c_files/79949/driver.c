#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-51;
signed char var_3 = (signed char)-31;
signed char var_8 = (signed char)106;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 17597329482201372027ULL;
unsigned char var_14 = (unsigned char)117;
signed char var_15 = (signed char)-104;
signed char var_16 = (signed char)-27;
long long int var_17 = 7597842842504367872LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
