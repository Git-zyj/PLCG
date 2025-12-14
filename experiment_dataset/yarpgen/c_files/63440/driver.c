#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
long long int var_2 = -6301298488584255140LL;
signed char var_10 = (signed char)7;
signed char var_12 = (signed char)80;
signed char var_18 = (signed char)-38;
signed char var_19 = (signed char)-9;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-10;
long long int var_22 = -1291674657011541209LL;
signed char var_23 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
