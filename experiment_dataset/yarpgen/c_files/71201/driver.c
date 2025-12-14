#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15665799189621505477ULL;
_Bool var_1 = (_Bool)1;
short var_4 = (short)-3418;
unsigned long long int var_7 = 14189733318382038254ULL;
unsigned short var_8 = (unsigned short)10810;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)26238;
_Bool var_11 = (_Bool)1;
unsigned short var_14 = (unsigned short)15506;
unsigned short var_15 = (unsigned short)24049;
unsigned short var_17 = (unsigned short)16234;
short var_18 = (short)27152;
int zero = 0;
unsigned short var_19 = (unsigned short)27233;
short var_20 = (short)20163;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 13016456866100957666ULL;
short var_23 = (short)-7342;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
