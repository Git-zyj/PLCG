#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 536668649;
unsigned int var_7 = 4019270589U;
short var_9 = (short)6202;
int var_10 = 737676838;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)64764;
long long int var_14 = 5581144463361893882LL;
long long int var_15 = -3344360766636584395LL;
short var_17 = (short)31051;
int var_19 = -1187336513;
int zero = 0;
unsigned long long int var_20 = 7507459728713385463ULL;
int var_21 = 1047219451;
_Bool var_22 = (_Bool)1;
short var_23 = (short)21511;
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
