#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)41;
unsigned short var_4 = (unsigned short)17951;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-11971;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-101;
signed char var_20 = (signed char)-74;
_Bool var_21 = (_Bool)0;
long long int var_22 = 1406433565034413090LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
