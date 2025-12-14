#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3568;
unsigned short var_1 = (unsigned short)33458;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)57743;
unsigned int var_5 = 1588301336U;
unsigned short var_6 = (unsigned short)24102;
unsigned short var_7 = (unsigned short)14700;
signed char var_9 = (signed char)68;
unsigned int var_10 = 3522021339U;
int zero = 0;
unsigned int var_13 = 1698992624U;
unsigned int var_14 = 98742645U;
unsigned long long int var_15 = 1827733002799722607ULL;
short var_16 = (short)25485;
int var_17 = -683758115;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
