#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -478173242;
unsigned long long int var_1 = 4082145870415684348ULL;
unsigned int var_4 = 392134534U;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 10999368823995952178ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)10;
long long int var_13 = 6984783855226965361LL;
void init() {
}

void checksum() {
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
