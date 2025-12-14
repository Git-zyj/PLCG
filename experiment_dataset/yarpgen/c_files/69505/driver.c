#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 293424733369922091ULL;
unsigned short var_8 = (unsigned short)58087;
signed char var_9 = (signed char)-98;
int zero = 0;
short var_11 = (short)8574;
unsigned char var_12 = (unsigned char)174;
unsigned long long int var_13 = 574419240279977340ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
