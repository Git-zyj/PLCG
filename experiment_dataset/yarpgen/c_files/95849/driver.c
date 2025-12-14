#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 12756097911437486061ULL;
short var_5 = (short)-833;
_Bool var_8 = (_Bool)0;
short var_11 = (short)26393;
unsigned char var_14 = (unsigned char)149;
unsigned short var_16 = (unsigned short)60421;
unsigned short var_17 = (unsigned short)51618;
int zero = 0;
int var_18 = 1616875954;
unsigned int var_19 = 30312931U;
unsigned long long int var_20 = 16995574077014104180ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
