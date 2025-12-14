#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10637;
_Bool var_1 = (_Bool)1;
int var_2 = -1352103714;
long long int var_3 = 8252609383160187711LL;
short var_4 = (short)-18623;
long long int var_5 = 1386780133827878141LL;
short var_6 = (short)-26231;
signed char var_7 = (signed char)(-127 - 1);
unsigned long long int var_8 = 4462385320891373592ULL;
unsigned long long int var_9 = 17625632649437373198ULL;
int zero = 0;
unsigned long long int var_10 = 7665223358962344141ULL;
unsigned long long int var_11 = 6388585103335391103ULL;
long long int var_12 = 385294822473341872LL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)9;
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
