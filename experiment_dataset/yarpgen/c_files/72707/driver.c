#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)50;
unsigned long long int var_4 = 4193664380450792104ULL;
long long int var_5 = 3820263034291155251LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 18414328350444305218ULL;
short var_20 = (short)12091;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
