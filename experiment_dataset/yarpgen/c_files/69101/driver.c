#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5840361923436349533LL;
unsigned long long int var_2 = 4019790478052608361ULL;
long long int var_4 = -3413534290553066327LL;
signed char var_5 = (signed char)83;
unsigned long long int var_7 = 10811409377404389487ULL;
unsigned long long int var_11 = 4685975597392559918ULL;
unsigned int var_13 = 3780613305U;
unsigned long long int var_16 = 7715403712156055336ULL;
int zero = 0;
long long int var_17 = 7183129375689646357LL;
signed char var_18 = (signed char)69;
long long int var_19 = -8854043544737666831LL;
unsigned long long int var_20 = 15569643553090725071ULL;
long long int var_21 = 2949552338041038360LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
