#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9895490193084344660ULL;
unsigned int var_2 = 4290672908U;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-20442;
unsigned long long int var_12 = 11615300232882143952ULL;
unsigned short var_15 = (unsigned short)41719;
int zero = 0;
unsigned int var_16 = 2755736090U;
signed char var_17 = (signed char)58;
unsigned long long int var_18 = 3745780180724232830ULL;
unsigned long long int var_19 = 5887454674539736336ULL;
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
