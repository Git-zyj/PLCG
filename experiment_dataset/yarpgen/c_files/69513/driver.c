#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)102;
unsigned int var_3 = 2151078093U;
unsigned long long int var_9 = 1823586745193668793ULL;
unsigned short var_10 = (unsigned short)48777;
long long int var_12 = 4824518006850294470LL;
signed char var_17 = (signed char)-34;
int zero = 0;
unsigned long long int var_18 = 12069755157341607677ULL;
unsigned char var_19 = (unsigned char)221;
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
