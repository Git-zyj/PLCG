#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)53719;
unsigned char var_4 = (unsigned char)163;
unsigned short var_12 = (unsigned short)16680;
int var_13 = 1780646042;
unsigned short var_17 = (unsigned short)37056;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 7621949165374241284ULL;
unsigned long long int var_21 = 1898799098560038159ULL;
int var_22 = -1129276072;
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
