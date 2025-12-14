#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6653785940215901571LL;
int var_4 = -939641516;
_Bool var_13 = (_Bool)0;
int var_14 = 2038481544;
unsigned char var_18 = (unsigned char)25;
int zero = 0;
int var_19 = 2034970765;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)85;
long long int var_22 = -4017932252484724194LL;
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
