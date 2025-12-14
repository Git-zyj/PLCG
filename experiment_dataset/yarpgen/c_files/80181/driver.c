#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8360882718437604063LL;
int var_4 = -660743800;
long long int var_7 = -5688688882238357398LL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)20377;
int zero = 0;
unsigned long long int var_12 = 6188702203307510540ULL;
long long int var_13 = -8239139169044301824LL;
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
