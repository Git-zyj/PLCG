#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4664371087339524445LL;
unsigned int var_1 = 177653345U;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)54;
int zero = 0;
int var_11 = -1924806800;
unsigned long long int var_12 = 12336700606369348646ULL;
long long int var_13 = 3111930443490279005LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
