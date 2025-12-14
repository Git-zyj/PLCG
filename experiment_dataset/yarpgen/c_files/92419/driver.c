#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)38217;
signed char var_5 = (signed char)-102;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)24073;
int zero = 0;
unsigned long long int var_17 = 4940835699262225399ULL;
unsigned char var_18 = (unsigned char)78;
signed char var_19 = (signed char)73;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
