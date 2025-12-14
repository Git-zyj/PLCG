#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4536506078801989860LL;
unsigned int var_2 = 221922074U;
long long int var_6 = 1002062392096693423LL;
unsigned short var_7 = (unsigned short)2111;
signed char var_8 = (signed char)-50;
signed char var_11 = (signed char)-33;
unsigned int var_12 = 644663678U;
unsigned char var_13 = (unsigned char)225;
unsigned int var_14 = 3889605170U;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 18291470593705577780ULL;
unsigned short var_17 = (unsigned short)38360;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
