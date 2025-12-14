#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 368450447;
short var_2 = (short)8102;
unsigned int var_4 = 2703729719U;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)-118;
unsigned char var_11 = (unsigned char)181;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-20457;
unsigned int var_14 = 205018559U;
int zero = 0;
short var_16 = (short)776;
short var_17 = (short)8585;
unsigned char var_18 = (unsigned char)154;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
