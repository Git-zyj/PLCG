#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5645572048026725511LL;
short var_2 = (short)8156;
short var_3 = (short)7663;
unsigned int var_6 = 3059962557U;
long long int var_7 = -3435740342888596492LL;
unsigned short var_9 = (unsigned short)12105;
int zero = 0;
unsigned char var_10 = (unsigned char)152;
_Bool var_11 = (_Bool)0;
long long int var_12 = -1635605125516094968LL;
unsigned int var_13 = 2960573177U;
unsigned short var_14 = (unsigned short)55943;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
