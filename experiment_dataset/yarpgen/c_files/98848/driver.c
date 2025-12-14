#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6505214569200100636LL;
unsigned short var_3 = (unsigned short)47457;
long long int var_4 = 1223875102993945931LL;
signed char var_9 = (signed char)86;
unsigned int var_11 = 887271623U;
int var_13 = -19654866;
unsigned short var_14 = (unsigned short)50810;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 323094804U;
int var_21 = 683722130;
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
