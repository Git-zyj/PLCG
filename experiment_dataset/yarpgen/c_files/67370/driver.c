#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)82;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)57;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)83;
unsigned short var_8 = (unsigned short)59096;
unsigned short var_9 = (unsigned short)41465;
signed char var_11 = (signed char)125;
int zero = 0;
signed char var_12 = (signed char)-17;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
