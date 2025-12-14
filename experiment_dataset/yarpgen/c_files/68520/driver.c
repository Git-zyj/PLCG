#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4245757183005776014LL;
signed char var_4 = (signed char)-119;
int var_8 = -1509849020;
unsigned long long int var_14 = 17880430617052340347ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)57021;
signed char var_19 = (signed char)67;
unsigned long long int var_20 = 7422990039160231953ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
