#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57743;
short var_5 = (short)4;
short var_6 = (short)16172;
unsigned long long int var_7 = 5146054676479668900ULL;
unsigned long long int var_8 = 13021264912192236981ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)65299;
signed char var_13 = (signed char)-35;
int zero = 0;
unsigned short var_17 = (unsigned short)25063;
long long int var_18 = -3407710296784007041LL;
unsigned int var_19 = 666346089U;
long long int var_20 = 4507804322446773771LL;
void init() {
}

void checksum() {
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
