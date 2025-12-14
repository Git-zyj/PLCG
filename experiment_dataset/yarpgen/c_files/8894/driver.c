#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53928;
_Bool var_3 = (_Bool)0;
unsigned int var_8 = 3598971589U;
unsigned char var_13 = (unsigned char)104;
unsigned short var_15 = (unsigned short)61343;
int zero = 0;
unsigned short var_17 = (unsigned short)23006;
long long int var_18 = -8579437207282357179LL;
void init() {
}

void checksum() {
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
