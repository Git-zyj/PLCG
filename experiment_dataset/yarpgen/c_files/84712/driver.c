#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1091704977;
int var_2 = 700239829;
int var_3 = -1308016775;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)106;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int var_9 = -1314987356;
int zero = 0;
int var_12 = 1049475022;
int var_13 = -321216937;
int var_14 = -952708064;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
