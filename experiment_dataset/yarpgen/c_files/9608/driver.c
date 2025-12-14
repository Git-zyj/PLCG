#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 563866672868654738ULL;
long long int var_8 = -2866342551448924687LL;
_Bool var_10 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)115;
long long int var_18 = 4791676826345137200LL;
long long int var_19 = -5108755331206464906LL;
void init() {
}

void checksum() {
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
