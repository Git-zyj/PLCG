#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -1747124405;
signed char var_3 = (signed char)117;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)24652;
short var_6 = (short)-20958;
unsigned short var_9 = (unsigned short)50026;
int zero = 0;
unsigned long long int var_12 = 11980249067649527987ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 6845986149120571160ULL;
unsigned int var_15 = 1603266446U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
