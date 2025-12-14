#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8989517321401756138LL;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)231;
unsigned long long int var_13 = 16837512852502065112ULL;
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
