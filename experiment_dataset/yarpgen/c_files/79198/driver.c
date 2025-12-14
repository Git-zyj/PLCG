#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2063340183172769052LL;
long long int var_8 = 1498904097624160757LL;
long long int var_9 = -8314214399950407855LL;
int var_11 = 204006889;
unsigned long long int var_17 = 7027248850007688023ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 476924752U;
long long int var_22 = 4318178430290808695LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
