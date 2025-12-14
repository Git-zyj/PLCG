#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)114;
long long int var_8 = -5695777208403663964LL;
unsigned short var_10 = (unsigned short)52480;
long long int var_12 = 6800434095518188223LL;
long long int var_17 = -2678678423220098151LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 8865592101566201526LL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
