#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13180704992378488467ULL;
unsigned short var_1 = (unsigned short)65189;
int var_2 = -1268580378;
unsigned long long int var_4 = 10629060400530212414ULL;
signed char var_8 = (signed char)-119;
short var_9 = (short)21953;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_13 = -3983955991475246388LL;
unsigned char var_14 = (unsigned char)67;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
