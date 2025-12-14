#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_4 = 1614354287566224714LL;
int var_8 = -1735977130;
unsigned short var_10 = (unsigned short)26483;
long long int var_14 = -7692790428363870695LL;
long long int var_15 = -815901534683065545LL;
long long int var_18 = 7505175131762695663LL;
int zero = 0;
unsigned char var_20 = (unsigned char)13;
unsigned short var_21 = (unsigned short)5977;
long long int var_22 = -8996863828638532400LL;
unsigned short var_23 = (unsigned short)37701;
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
