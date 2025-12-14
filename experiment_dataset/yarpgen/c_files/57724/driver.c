#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -533776001;
int var_4 = 85085179;
signed char var_8 = (signed char)21;
unsigned int var_10 = 2516874572U;
unsigned int var_12 = 2002756910U;
signed char var_13 = (signed char)-116;
short var_14 = (short)13533;
unsigned char var_15 = (unsigned char)68;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)22;
unsigned short var_19 = (unsigned short)35062;
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
