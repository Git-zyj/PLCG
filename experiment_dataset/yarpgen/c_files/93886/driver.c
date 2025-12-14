#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 10822627673349199444ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 10912702315760516894ULL;
unsigned long long int var_12 = 6268620278000161101ULL;
unsigned long long int var_16 = 2211475070207623449ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)62932;
unsigned int var_18 = 1242018822U;
unsigned int var_19 = 271094969U;
int var_20 = -1271734053;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
