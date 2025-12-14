#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5832;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 5817638937929127551ULL;
int var_3 = -1278270523;
unsigned int var_6 = 966843891U;
short var_7 = (short)-10380;
unsigned short var_9 = (unsigned short)4177;
int zero = 0;
short var_10 = (short)-5181;
long long int var_11 = 384953721272782265LL;
short var_12 = (short)-25467;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
