#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32531;
unsigned long long int var_2 = 10885874597311909005ULL;
unsigned int var_3 = 173522203U;
short var_4 = (short)10422;
signed char var_5 = (signed char)-25;
unsigned short var_8 = (unsigned short)50203;
unsigned long long int var_9 = 7518372093161901998ULL;
unsigned char var_10 = (unsigned char)65;
unsigned long long int var_12 = 2759544446429477709ULL;
unsigned int var_16 = 964703621U;
int zero = 0;
unsigned int var_18 = 4244506364U;
long long int var_19 = 2073004807322331378LL;
unsigned short var_20 = (unsigned short)20232;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
