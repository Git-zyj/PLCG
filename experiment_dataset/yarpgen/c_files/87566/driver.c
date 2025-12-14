#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1369362972U;
_Bool var_7 = (_Bool)0;
signed char var_17 = (signed char)-67;
int zero = 0;
long long int var_18 = 7327012338240469386LL;
long long int var_19 = 1795848759551330853LL;
unsigned short var_20 = (unsigned short)38084;
unsigned char var_21 = (unsigned char)233;
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
