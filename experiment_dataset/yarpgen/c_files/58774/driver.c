#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)86;
signed char var_7 = (signed char)98;
unsigned short var_8 = (unsigned short)24150;
unsigned long long int var_14 = 18096862605625583532ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)31457;
signed char var_18 = (signed char)-28;
unsigned short var_19 = (unsigned short)32622;
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
