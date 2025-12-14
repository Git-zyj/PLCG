#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-116;
unsigned long long int var_1 = 4176762383033684266ULL;
unsigned long long int var_2 = 13701542583854155858ULL;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)1;
int var_8 = 875460778;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = 6331664191648185777LL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 10933340351198154254ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
