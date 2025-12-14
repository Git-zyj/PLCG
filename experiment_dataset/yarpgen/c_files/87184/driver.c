#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)22;
unsigned long long int var_8 = 17843283311585396637ULL;
_Bool var_10 = (_Bool)1;
long long int var_16 = 4335559506400764997LL;
int zero = 0;
unsigned long long int var_17 = 13532915246213154967ULL;
unsigned int var_18 = 1128876201U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
