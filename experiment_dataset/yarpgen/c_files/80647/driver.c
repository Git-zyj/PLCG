#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 192407313;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)6;
long long int var_11 = 6514743209135709757LL;
signed char var_12 = (signed char)-49;
long long int var_13 = -6120267042205582464LL;
int zero = 0;
signed char var_17 = (signed char)85;
unsigned long long int var_18 = 14577733554979728112ULL;
signed char var_19 = (signed char)-5;
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
