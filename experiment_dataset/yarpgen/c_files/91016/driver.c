#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
long long int var_8 = -4967856193353538526LL;
long long int var_15 = -39852344693719670LL;
int zero = 0;
short var_16 = (short)-24820;
unsigned long long int var_17 = 13779374586083618607ULL;
signed char var_18 = (signed char)11;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
