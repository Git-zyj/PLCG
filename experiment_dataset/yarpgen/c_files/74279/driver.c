#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-25;
unsigned long long int var_2 = 13712153650586473523ULL;
int var_3 = -1367385850;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 17435211317907102651ULL;
unsigned char var_8 = (unsigned char)40;
int zero = 0;
unsigned short var_10 = (unsigned short)28095;
int var_11 = 1720194231;
short var_12 = (short)-25468;
unsigned int var_13 = 4199038529U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
