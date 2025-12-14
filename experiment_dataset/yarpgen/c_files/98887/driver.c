#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-121;
unsigned int var_3 = 3867111311U;
long long int var_5 = 2402613373554429494LL;
signed char var_6 = (signed char)-17;
unsigned char var_7 = (unsigned char)40;
long long int var_11 = 3503436799624556289LL;
signed char var_17 = (signed char)14;
int zero = 0;
unsigned short var_20 = (unsigned short)57209;
unsigned long long int var_21 = 2077478354233026335ULL;
short var_22 = (short)32622;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
