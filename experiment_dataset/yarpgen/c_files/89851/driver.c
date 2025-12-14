#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2304246294820130942LL;
unsigned long long int var_3 = 5866390640764227391ULL;
int var_4 = 1098800475;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)115;
signed char var_9 = (signed char)-74;
short var_10 = (short)-13732;
long long int var_11 = -4031121986217655674LL;
int zero = 0;
unsigned long long int var_14 = 2873304329914216922ULL;
short var_15 = (short)-5921;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
