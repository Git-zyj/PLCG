#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)94;
unsigned int var_5 = 3644606207U;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_16 = -930639321931669344LL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 12300028703349405887ULL;
unsigned char var_19 = (unsigned char)44;
unsigned long long int var_20 = 9798470014851675224ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
