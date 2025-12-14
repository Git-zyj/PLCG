#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1721187646U;
long long int var_5 = -1141236044440117316LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_12 = 12550946939116641690ULL;
long long int var_13 = -2309584011173598314LL;
signed char var_17 = (signed char)-11;
unsigned char var_18 = (unsigned char)14;
unsigned int var_19 = 4070682322U;
int zero = 0;
unsigned long long int var_20 = 10496062099795358123ULL;
unsigned char var_21 = (unsigned char)110;
unsigned char var_22 = (unsigned char)8;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)60516;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
