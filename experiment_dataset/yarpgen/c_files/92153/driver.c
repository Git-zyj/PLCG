#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4281957296U;
_Bool var_1 = (_Bool)1;
unsigned int var_4 = 2018651100U;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)5939;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)49232;
int zero = 0;
unsigned int var_10 = 3599317503U;
long long int var_11 = -4292542458428079723LL;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2600463399U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
