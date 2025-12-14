#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)31822;
unsigned char var_5 = (unsigned char)52;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-114;
int zero = 0;
signed char var_11 = (signed char)-104;
long long int var_12 = 2144855922470865413LL;
unsigned int var_13 = 3771714945U;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 12224325066159188845ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
