#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 802164412582562585ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 10112413203182033147ULL;
unsigned long long int var_7 = 5728092876202161391ULL;
unsigned long long int var_8 = 15049243769419402732ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 8543427336016936161ULL;
unsigned long long int var_15 = 3056651943387884679ULL;
unsigned long long int var_16 = 14696730815644242970ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
