#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8232351331381497327LL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)45044;
unsigned short var_5 = (unsigned short)40118;
int var_7 = -1429887152;
unsigned int var_8 = 4224291646U;
long long int var_12 = -8782290397966625734LL;
int zero = 0;
unsigned short var_15 = (unsigned short)21370;
short var_16 = (short)16637;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
