#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)128;
long long int var_2 = 2349227890581418167LL;
int var_4 = 698206143;
unsigned short var_6 = (unsigned short)2697;
unsigned int var_10 = 4012551210U;
int var_12 = 1355988280;
int zero = 0;
long long int var_19 = -3928875988411602083LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
