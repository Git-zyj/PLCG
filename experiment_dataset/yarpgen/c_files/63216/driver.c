#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10676;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-1569;
signed char var_3 = (signed char)-13;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)54954;
short var_9 = (short)18897;
unsigned long long int var_10 = 4886786424411467780ULL;
signed char var_11 = (signed char)119;
long long int var_12 = 896761240174654850LL;
unsigned short var_15 = (unsigned short)64860;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 9787818412189536521ULL;
unsigned long long int var_18 = 16092428806717699275ULL;
unsigned long long int var_19 = 12554145610807769615ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
