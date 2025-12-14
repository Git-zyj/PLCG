#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15997;
long long int var_2 = 3273255749039123307LL;
short var_8 = (short)25985;
signed char var_9 = (signed char)8;
signed char var_10 = (signed char)11;
long long int var_11 = -8001017084333329545LL;
signed char var_12 = (signed char)-31;
int zero = 0;
long long int var_13 = -5178777502200321307LL;
signed char var_14 = (signed char)116;
signed char var_15 = (signed char)0;
signed char var_16 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
