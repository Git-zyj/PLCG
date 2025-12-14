#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 13361753871213172533ULL;
unsigned long long int var_10 = 8159357894620579605ULL;
unsigned short var_16 = (unsigned short)53346;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = -1611162420;
long long int var_20 = -4535311594978928212LL;
int var_21 = 1237383464;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
