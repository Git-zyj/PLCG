#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14061;
short var_1 = (short)12903;
unsigned int var_3 = 2716103936U;
int var_4 = 850390421;
unsigned short var_5 = (unsigned short)21837;
int var_7 = -383411279;
unsigned int var_8 = 1474165889U;
unsigned int var_10 = 1309484117U;
_Bool var_12 = (_Bool)0;
short var_13 = (short)31038;
unsigned long long int var_14 = 3353070563067689117ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)119;
unsigned char var_18 = (unsigned char)126;
unsigned char var_19 = (unsigned char)224;
unsigned long long int var_20 = 753624583538106832ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
