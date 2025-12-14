#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42400;
unsigned int var_4 = 3042081384U;
unsigned long long int var_6 = 3186027885006625488ULL;
short var_8 = (short)19660;
unsigned int var_9 = 4088635737U;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)16005;
int zero = 0;
unsigned long long int var_13 = 8773127915791685359ULL;
unsigned short var_14 = (unsigned short)62741;
signed char var_15 = (signed char)-98;
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
