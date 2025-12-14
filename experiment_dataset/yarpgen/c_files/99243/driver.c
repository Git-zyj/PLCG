#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)101;
signed char var_4 = (signed char)-25;
unsigned long long int var_5 = 15093785462261816879ULL;
unsigned int var_6 = 742626963U;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 17645094634699974613ULL;
unsigned short var_12 = (unsigned short)28672;
signed char var_14 = (signed char)-72;
int var_17 = 508162279;
int zero = 0;
unsigned int var_18 = 1392069686U;
unsigned long long int var_19 = 3558905124000291684ULL;
void init() {
}

void checksum() {
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
