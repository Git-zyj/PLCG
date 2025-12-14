#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4192370271U;
int var_1 = -1189090579;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 293985315U;
signed char var_10 = (signed char)-107;
int zero = 0;
short var_12 = (short)4325;
unsigned long long int var_13 = 1414583877027891713ULL;
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
