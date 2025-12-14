#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3795796047U;
unsigned long long int var_8 = 2663800353714278297ULL;
unsigned long long int var_9 = 18037885101484425365ULL;
unsigned int var_11 = 1436330626U;
unsigned long long int var_12 = 13590018016215123419ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 7501256999305021454ULL;
unsigned long long int var_15 = 2656054661488246298ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
