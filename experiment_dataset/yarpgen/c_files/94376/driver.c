#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 7744166266452472220ULL;
short var_3 = (short)18508;
long long int var_5 = -3093011337267507366LL;
signed char var_7 = (signed char)122;
int var_10 = 1726147003;
unsigned int var_11 = 1844344745U;
long long int var_12 = -3415573714498869600LL;
int zero = 0;
short var_14 = (short)25822;
signed char var_15 = (signed char)98;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-74;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
