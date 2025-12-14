#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)62;
unsigned int var_6 = 3820309413U;
unsigned int var_11 = 547335596U;
int var_14 = -683793567;
signed char var_15 = (signed char)-71;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 573898392U;
int var_18 = -868628188;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
