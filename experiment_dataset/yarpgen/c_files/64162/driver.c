#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3119699283U;
short var_7 = (short)20099;
long long int var_9 = 2925877894112404671LL;
long long int var_11 = -8297991550439524182LL;
unsigned long long int var_12 = 1523177644055571634ULL;
unsigned char var_14 = (unsigned char)53;
unsigned char var_15 = (unsigned char)233;
unsigned char var_18 = (unsigned char)72;
signed char var_19 = (signed char)-84;
int zero = 0;
unsigned long long int var_20 = 2228304302532952088ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
