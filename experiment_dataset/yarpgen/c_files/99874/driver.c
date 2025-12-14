#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15768;
short var_2 = (short)321;
long long int var_4 = 4470994270153986477LL;
int var_6 = -1224561514;
unsigned short var_7 = (unsigned short)37614;
_Bool var_11 = (_Bool)1;
int var_18 = -803499878;
int zero = 0;
long long int var_20 = -3986377929243995546LL;
unsigned int var_21 = 3092311231U;
long long int var_22 = -4287982679078446311LL;
short var_23 = (short)9516;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
