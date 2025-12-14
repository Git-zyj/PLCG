#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14181788395578526042ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)228;
unsigned long long int var_13 = 624073012512221220ULL;
int var_14 = 1095539989;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)19818;
short var_17 = (short)-31064;
unsigned short var_18 = (unsigned short)38161;
short var_19 = (short)4912;
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
