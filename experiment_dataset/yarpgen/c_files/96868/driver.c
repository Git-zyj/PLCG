#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_6 = -6879022994239401932LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 391073726600113862LL;
_Bool var_15 = (_Bool)1;
short var_16 = (short)23115;
unsigned char var_17 = (unsigned char)247;
unsigned long long int var_18 = 2310383199458785094ULL;
int zero = 0;
short var_20 = (short)25258;
int var_21 = -1803550665;
unsigned short var_22 = (unsigned short)52969;
unsigned char var_23 = (unsigned char)169;
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
