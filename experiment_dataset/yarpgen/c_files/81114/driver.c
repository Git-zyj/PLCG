#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1986991315;
_Bool var_3 = (_Bool)1;
unsigned long long int var_7 = 299338137158235313ULL;
unsigned char var_9 = (unsigned char)126;
short var_14 = (short)5476;
int var_16 = 46079069;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = 804726391;
short var_20 = (short)13955;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
