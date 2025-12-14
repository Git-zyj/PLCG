#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32963;
unsigned long long int var_4 = 9365214801534810567ULL;
_Bool var_14 = (_Bool)1;
short var_16 = (short)3343;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-8035;
void init() {
}

void checksum() {
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
