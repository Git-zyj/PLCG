#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)10691;
short var_5 = (short)-13146;
unsigned long long int var_6 = 13979335363178668380ULL;
short var_7 = (short)25086;
long long int var_9 = 6503591146918728692LL;
unsigned short var_10 = (unsigned short)16127;
int zero = 0;
unsigned short var_14 = (unsigned short)47324;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
