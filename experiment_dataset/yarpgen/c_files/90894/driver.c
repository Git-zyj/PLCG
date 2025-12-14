#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1576063324;
unsigned long long int var_1 = 5593488035035725443ULL;
_Bool var_4 = (_Bool)0;
long long int var_5 = 9220085616345903992LL;
short var_8 = (short)29520;
short var_9 = (short)-12547;
short var_11 = (short)-26398;
_Bool var_12 = (_Bool)1;
int var_13 = 349531657;
int zero = 0;
short var_18 = (short)13553;
signed char var_19 = (signed char)-82;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
