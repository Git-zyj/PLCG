#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = 4047102195680436115LL;
unsigned long long int var_4 = 15388958617258196566ULL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)74;
int zero = 0;
unsigned char var_10 = (unsigned char)16;
unsigned long long int var_11 = 18278752619932978532ULL;
short var_12 = (short)3982;
unsigned short var_13 = (unsigned short)51547;
unsigned long long int var_14 = 8104107772335396184ULL;
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
