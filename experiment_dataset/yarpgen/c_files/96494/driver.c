#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3267446223U;
unsigned long long int var_1 = 15182214274625450345ULL;
long long int var_3 = -173821946798726388LL;
int var_7 = 2017980687;
unsigned char var_11 = (unsigned char)229;
_Bool var_17 = (_Bool)1;
int var_19 = -1420593499;
int zero = 0;
unsigned long long int var_20 = 14571933682271436564ULL;
long long int var_21 = -5167375112014518658LL;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)54;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
