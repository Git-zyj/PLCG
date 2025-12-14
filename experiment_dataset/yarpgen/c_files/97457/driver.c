#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31888;
short var_2 = (short)-10981;
long long int var_4 = 2063739132100528848LL;
long long int var_5 = -8730516211066918043LL;
unsigned char var_6 = (unsigned char)182;
unsigned short var_7 = (unsigned short)37407;
short var_8 = (short)20390;
unsigned int var_10 = 91955414U;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-20;
unsigned long long int var_14 = 11684747134834870861ULL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)65483;
unsigned int var_17 = 3612328487U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
