#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3483475825106682356LL;
unsigned int var_1 = 3172944497U;
long long int var_5 = 6762337524745951891LL;
unsigned int var_6 = 806870999U;
unsigned int var_7 = 3987112530U;
int var_9 = 1033988144;
long long int var_13 = -502813957288454977LL;
long long int var_16 = -7669656558183042507LL;
int zero = 0;
short var_19 = (short)3026;
unsigned char var_20 = (unsigned char)117;
int var_21 = 1523271419;
void init() {
}

void checksum() {
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
