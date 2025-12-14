#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 63143130U;
short var_1 = (short)-1672;
unsigned char var_9 = (unsigned char)6;
unsigned int var_11 = 3382223682U;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_16 = -3446768273667234090LL;
unsigned char var_17 = (unsigned char)216;
unsigned int var_18 = 4260715643U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
