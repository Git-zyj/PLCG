#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1942571749363181054LL;
long long int var_5 = -1665758443251901997LL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned int var_14 = 1627814014U;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_18 = 2226671117750803469LL;
unsigned long long int var_19 = 3045827659295534250ULL;
_Bool var_20 = (_Bool)1;
long long int var_21 = 5615967642322575123LL;
unsigned char var_22 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
