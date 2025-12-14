#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14529;
_Bool var_3 = (_Bool)0;
int var_4 = -1936799133;
signed char var_6 = (signed char)-48;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 12083109899894030905ULL;
int zero = 0;
int var_12 = 737619410;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
