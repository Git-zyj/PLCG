#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16203;
long long int var_7 = -7575662301558327595LL;
_Bool var_9 = (_Bool)0;
long long int var_10 = 4088352133261852659LL;
short var_11 = (short)28383;
int zero = 0;
short var_19 = (short)18880;
_Bool var_20 = (_Bool)0;
short var_21 = (short)10632;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
