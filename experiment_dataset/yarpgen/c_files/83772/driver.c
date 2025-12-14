#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16001025509389177983ULL;
unsigned short var_3 = (unsigned short)63625;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)21531;
long long int var_10 = -8734192879894513002LL;
unsigned long long int var_11 = 16901000777117078078ULL;
int zero = 0;
short var_13 = (short)-24212;
short var_14 = (short)-8551;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
