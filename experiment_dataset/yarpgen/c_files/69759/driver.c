#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned long long int var_11 = 15501292725176775335ULL;
_Bool var_12 = (_Bool)1;
short var_14 = (short)30222;
int zero = 0;
unsigned short var_18 = (unsigned short)31209;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1672427218U;
short var_21 = (short)23801;
void init() {
}

void checksum() {
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
