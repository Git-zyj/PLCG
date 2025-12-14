#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26388;
int var_1 = 1052189865;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
long long int var_5 = -3621873511214114252LL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = 3396322549664975458LL;
unsigned short var_12 = (unsigned short)7222;
unsigned short var_13 = (unsigned short)59990;
long long int var_14 = 3152011125289174640LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
