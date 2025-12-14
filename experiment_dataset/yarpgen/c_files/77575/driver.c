#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_6 = 4885488895771978700LL;
unsigned short var_16 = (unsigned short)37199;
int zero = 0;
long long int var_19 = -5249121667079350263LL;
long long int var_20 = 5088111826066181905LL;
long long int var_21 = 450276658321248940LL;
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
