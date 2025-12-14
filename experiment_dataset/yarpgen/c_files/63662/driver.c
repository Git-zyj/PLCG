#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5997158429415847487ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 274507130929127867ULL;
unsigned long long int var_5 = 2422112748716587374ULL;
unsigned long long int var_6 = 17891309532119227611ULL;
signed char var_9 = (signed char)6;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)31;
signed char var_15 = (signed char)-7;
void init() {
}

void checksum() {
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
