#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25196;
signed char var_1 = (signed char)-31;
unsigned char var_3 = (unsigned char)67;
unsigned int var_5 = 555587483U;
unsigned int var_8 = 3516805153U;
short var_9 = (short)14294;
int var_11 = -1281951039;
unsigned short var_15 = (unsigned short)18968;
int zero = 0;
unsigned char var_19 = (unsigned char)221;
unsigned long long int var_20 = 2659243801854234635ULL;
unsigned char var_21 = (unsigned char)252;
signed char var_22 = (signed char)111;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
