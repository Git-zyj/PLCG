#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1135725281;
unsigned short var_5 = (unsigned short)34918;
_Bool var_7 = (_Bool)0;
int var_10 = 1345085609;
short var_11 = (short)1557;
short var_12 = (short)-10482;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 15024627435849025784ULL;
long long int var_19 = 8679892114253111298LL;
unsigned long long int var_20 = 16228083278178146929ULL;
short var_21 = (short)-25464;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
