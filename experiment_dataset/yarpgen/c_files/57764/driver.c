#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16557471529031693487ULL;
long long int var_3 = 5030633273361513295LL;
signed char var_5 = (signed char)-63;
int var_8 = 530722401;
_Bool var_15 = (_Bool)0;
int var_17 = 1766175122;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-53;
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
