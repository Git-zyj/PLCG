#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -391705611;
unsigned int var_2 = 1004633127U;
signed char var_3 = (signed char)-27;
unsigned long long int var_4 = 17192276441499847037ULL;
unsigned long long int var_5 = 8792007002303715211ULL;
unsigned short var_6 = (unsigned short)34254;
long long int var_8 = 6008496659170822LL;
unsigned short var_9 = (unsigned short)28050;
int zero = 0;
unsigned long long int var_10 = 162626257889580008ULL;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
