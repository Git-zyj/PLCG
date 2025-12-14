#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)6;
short var_7 = (short)-12180;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)41221;
signed char var_17 = (signed char)-18;
long long int var_18 = 2541664035057793527LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
