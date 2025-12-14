#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)44731;
int var_2 = 121042977;
unsigned long long int var_3 = 7624165657702502445ULL;
long long int var_4 = -835532290550145184LL;
unsigned char var_5 = (unsigned char)240;
long long int var_6 = -5372685558981062777LL;
short var_7 = (short)-15935;
unsigned short var_8 = (unsigned short)44981;
unsigned short var_9 = (unsigned short)51786;
unsigned long long int var_10 = 911085922964131965ULL;
int zero = 0;
unsigned long long int var_11 = 11095184001958105206ULL;
unsigned int var_12 = 1736640888U;
long long int var_13 = -391363638532038265LL;
int var_14 = -878792041;
long long int var_15 = -4488368521522211579LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
