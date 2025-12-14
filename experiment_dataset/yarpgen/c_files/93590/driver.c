#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)38895;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)29161;
unsigned long long int var_6 = 10420138798068628838ULL;
unsigned short var_10 = (unsigned short)31187;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_18 = -1467487667;
short var_19 = (short)17238;
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
