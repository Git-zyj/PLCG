#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14883218435431143008ULL;
unsigned char var_7 = (unsigned char)37;
unsigned int var_12 = 2140342059U;
unsigned long long int var_16 = 15169162972407791763ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 1743765314U;
_Bool var_20 = (_Bool)1;
long long int var_21 = -114739806986994137LL;
short var_22 = (short)-20948;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
