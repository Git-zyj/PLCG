#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-93;
short var_1 = (short)-7461;
unsigned long long int var_3 = 16791678524364875220ULL;
long long int var_4 = -1896601546601857072LL;
long long int var_5 = -1249451452034987114LL;
unsigned short var_7 = (unsigned short)22665;
signed char var_8 = (signed char)-117;
int zero = 0;
unsigned short var_12 = (unsigned short)21121;
_Bool var_13 = (_Bool)1;
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
