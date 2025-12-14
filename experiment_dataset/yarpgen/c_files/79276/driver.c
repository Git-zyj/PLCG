#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)22;
long long int var_1 = -1330579013279996155LL;
short var_2 = (short)20191;
short var_4 = (short)-16280;
long long int var_9 = 5491206046891280310LL;
int zero = 0;
long long int var_12 = 813353420976498155LL;
signed char var_13 = (signed char)111;
signed char var_14 = (signed char)-126;
long long int var_15 = 8583547546108103296LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
