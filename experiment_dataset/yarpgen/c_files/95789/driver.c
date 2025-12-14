#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3839926938462379507ULL;
unsigned long long int var_4 = 13180311877182509407ULL;
signed char var_5 = (signed char)-43;
unsigned short var_9 = (unsigned short)3759;
signed char var_10 = (signed char)53;
long long int var_12 = 8557739570738209860LL;
short var_13 = (short)32430;
unsigned char var_17 = (unsigned char)76;
int zero = 0;
long long int var_19 = -1019978601056904274LL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-118;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
