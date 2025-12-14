#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-117;
signed char var_4 = (signed char)10;
unsigned int var_6 = 1575589911U;
unsigned short var_9 = (unsigned short)18929;
int zero = 0;
unsigned short var_18 = (unsigned short)43707;
long long int var_19 = -4784996232841449581LL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-85;
short var_22 = (short)-25444;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
