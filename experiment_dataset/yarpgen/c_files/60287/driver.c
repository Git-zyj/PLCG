#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 513964164603141378LL;
signed char var_2 = (signed char)-117;
signed char var_7 = (signed char)102;
long long int var_12 = 4458577918647602237LL;
long long int var_16 = 6895384639205549712LL;
int zero = 0;
long long int var_18 = 7615530139205916072LL;
signed char var_19 = (signed char)-16;
unsigned short var_20 = (unsigned short)29597;
signed char var_21 = (signed char)-41;
void init() {
}

void checksum() {
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
