#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2466946764774325283LL;
short var_4 = (short)-31818;
long long int var_5 = -9194783640723818634LL;
int var_7 = -1545213701;
short var_12 = (short)-9306;
unsigned char var_15 = (unsigned char)191;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3569519508U;
short var_19 = (short)-20845;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
