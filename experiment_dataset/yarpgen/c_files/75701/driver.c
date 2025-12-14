#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)27867;
unsigned short var_4 = (unsigned short)54850;
signed char var_6 = (signed char)58;
short var_11 = (short)-25766;
_Bool var_13 = (_Bool)0;
unsigned short var_18 = (unsigned short)41232;
int zero = 0;
signed char var_20 = (signed char)-18;
unsigned short var_21 = (unsigned short)16729;
_Bool var_22 = (_Bool)1;
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
