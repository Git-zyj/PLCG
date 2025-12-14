#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3564469907423837809LL;
short var_3 = (short)7785;
int var_5 = -385031821;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)123;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 3492205131760623036ULL;
unsigned long long int var_22 = 4486415295304606003ULL;
void init() {
}

void checksum() {
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
