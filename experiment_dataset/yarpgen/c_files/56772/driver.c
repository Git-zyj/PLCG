#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)45878;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3351110275U;
unsigned long long int var_8 = 18300282046952141802ULL;
short var_10 = (short)15261;
short var_13 = (short)16906;
int zero = 0;
signed char var_18 = (signed char)-54;
unsigned char var_19 = (unsigned char)105;
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
