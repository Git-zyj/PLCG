#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 2345921510105135208LL;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)27;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 9739667277746140077ULL;
short var_9 = (short)-31804;
unsigned char var_10 = (unsigned char)251;
unsigned long long int var_11 = 7803400875304780195ULL;
unsigned long long int var_12 = 14263733599567438569ULL;
unsigned short var_13 = (unsigned short)16971;
unsigned int var_14 = 1535358110U;
_Bool var_16 = (_Bool)0;
unsigned short var_18 = (unsigned short)6782;
int zero = 0;
signed char var_19 = (signed char)-49;
int var_20 = -1698560832;
unsigned long long int var_21 = 12132677017005731831ULL;
signed char var_22 = (signed char)-30;
unsigned char var_23 = (unsigned char)34;
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
