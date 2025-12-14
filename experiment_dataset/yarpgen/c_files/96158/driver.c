#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17783899629151701836ULL;
unsigned long long int var_4 = 14123112769590863550ULL;
unsigned long long int var_9 = 8136706668046813248ULL;
signed char var_16 = (signed char)-5;
unsigned long long int var_17 = 5179190580536522544ULL;
int zero = 0;
long long int var_19 = 3895157829934795518LL;
unsigned long long int var_20 = 1117289922749996911ULL;
unsigned long long int var_21 = 13078306991693663336ULL;
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
