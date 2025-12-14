#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6984077021542113168LL;
short var_4 = (short)-19405;
unsigned char var_5 = (unsigned char)53;
long long int var_6 = 5337864270495572923LL;
long long int var_8 = 8523505544146516618LL;
unsigned int var_9 = 2600904906U;
unsigned short var_11 = (unsigned short)57553;
short var_12 = (short)25787;
int zero = 0;
unsigned long long int var_13 = 15821357844592049066ULL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
