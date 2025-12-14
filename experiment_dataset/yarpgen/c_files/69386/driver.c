#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 3673331161U;
long long int var_4 = 8001535222268754285LL;
short var_5 = (short)2692;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 17282089224954593261ULL;
unsigned long long int var_14 = 12751325972334846428ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
