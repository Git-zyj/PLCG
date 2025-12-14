#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_6 = (signed char)106;
unsigned short var_7 = (unsigned short)59293;
unsigned short var_8 = (unsigned short)23360;
unsigned long long int var_9 = 10015025035535715571ULL;
unsigned long long int var_15 = 15692510761048289235ULL;
int zero = 0;
unsigned long long int var_18 = 12898659666423825486ULL;
signed char var_19 = (signed char)-8;
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
