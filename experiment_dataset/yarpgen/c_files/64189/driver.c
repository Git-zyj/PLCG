#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)34;
unsigned long long int var_2 = 16837963490514364557ULL;
short var_3 = (short)18717;
unsigned long long int var_4 = 12519035205224373288ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 18018247784928656478ULL;
unsigned int var_7 = 987711897U;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-55;
unsigned long long int var_10 = 13514068776267716714ULL;
unsigned int var_11 = 367656535U;
short var_12 = (short)-16397;
signed char var_13 = (signed char)-57;
unsigned int var_14 = 1403008586U;
int zero = 0;
unsigned char var_15 = (unsigned char)58;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2187728998U;
unsigned char var_18 = (unsigned char)2;
unsigned long long int var_19 = 5606589806736115189ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
