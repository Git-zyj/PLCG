#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1771490104;
unsigned long long int var_2 = 2675981959095165433ULL;
_Bool var_5 = (_Bool)1;
long long int var_7 = 3487755292838072623LL;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-14383;
short var_11 = (short)19281;
unsigned short var_14 = (unsigned short)5213;
int zero = 0;
unsigned char var_15 = (unsigned char)208;
signed char var_16 = (signed char)-49;
void init() {
}

void checksum() {
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
