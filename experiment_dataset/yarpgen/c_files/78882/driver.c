#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)66;
short var_4 = (short)7659;
int var_6 = -1644837435;
unsigned long long int var_9 = 16718228760246477042ULL;
_Bool var_11 = (_Bool)0;
long long int var_12 = -8767913685335329465LL;
unsigned short var_13 = (unsigned short)31599;
long long int var_16 = -3092245818914220461LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -6385696704473343109LL;
unsigned short var_19 = (unsigned short)11106;
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
