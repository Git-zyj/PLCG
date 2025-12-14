#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3199000816349658325LL;
int var_8 = -1371206908;
short var_9 = (short)7180;
unsigned long long int var_11 = 7557009014468528569ULL;
int zero = 0;
unsigned long long int var_12 = 10269764520896291123ULL;
short var_13 = (short)5907;
signed char var_14 = (signed char)-17;
unsigned long long int var_15 = 5439909295993238279ULL;
long long int var_16 = -2778399307290008036LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
