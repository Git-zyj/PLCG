#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2889288120438087539LL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 13815509950727063734ULL;
unsigned int var_7 = 3728336477U;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_12 = 6734607734318277060LL;
unsigned char var_13 = (unsigned char)247;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
