#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-51;
_Bool var_6 = (_Bool)1;
short var_7 = (short)27450;
short var_9 = (short)10620;
_Bool var_14 = (_Bool)0;
int var_16 = -1335020995;
int zero = 0;
int var_18 = -391390156;
long long int var_19 = -1044309913448998270LL;
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
