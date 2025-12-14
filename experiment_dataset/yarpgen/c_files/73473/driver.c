#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18168905490878967806ULL;
unsigned short var_1 = (unsigned short)12354;
short var_2 = (short)-3546;
unsigned short var_5 = (unsigned short)32905;
int zero = 0;
long long int var_10 = -1450220015657698462LL;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
