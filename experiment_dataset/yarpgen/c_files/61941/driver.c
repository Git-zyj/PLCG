#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -902652453208060798LL;
_Bool var_3 = (_Bool)0;
long long int var_4 = 7474797434161775369LL;
unsigned int var_10 = 328500609U;
int zero = 0;
int var_14 = -810358552;
unsigned short var_15 = (unsigned short)25770;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
