#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 41556185;
unsigned long long int var_2 = 6869908154959340164ULL;
unsigned long long int var_9 = 12047007163738689519ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 6906000841892822601LL;
void init() {
}

void checksum() {
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
