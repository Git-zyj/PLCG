#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2110671795U;
unsigned int var_4 = 3236388911U;
int var_5 = -1162303481;
unsigned char var_6 = (unsigned char)167;
_Bool var_7 = (_Bool)0;
long long int var_13 = -6685806822173773024LL;
unsigned short var_14 = (unsigned short)37271;
short var_15 = (short)26189;
int zero = 0;
signed char var_16 = (signed char)-8;
unsigned long long int var_17 = 4191834077612693268ULL;
void init() {
}

void checksum() {
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
