#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)103;
short var_1 = (short)-20605;
int var_2 = 167783602;
unsigned int var_4 = 5494738U;
int var_7 = -1696612673;
unsigned int var_8 = 850322244U;
int zero = 0;
unsigned short var_20 = (unsigned short)3753;
long long int var_21 = 48290655644440805LL;
_Bool var_22 = (_Bool)1;
short var_23 = (short)12545;
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
