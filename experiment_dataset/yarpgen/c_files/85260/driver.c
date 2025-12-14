#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)83;
unsigned long long int var_2 = 12191472143200592519ULL;
long long int var_4 = 4343873852177590405LL;
long long int var_5 = -1827834111384453959LL;
unsigned int var_7 = 159686934U;
unsigned short var_11 = (unsigned short)44619;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -475944987;
void init() {
}

void checksum() {
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
