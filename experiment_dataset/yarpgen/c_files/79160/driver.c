#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)245;
_Bool var_1 = (_Bool)1;
long long int var_2 = -2776745865972386554LL;
int var_3 = -267075186;
short var_4 = (short)20318;
unsigned long long int var_5 = 18082581406286054410ULL;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 12193437198813899509ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)3;
unsigned char var_13 = (unsigned char)100;
unsigned long long int var_14 = 16030348143044238431ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
