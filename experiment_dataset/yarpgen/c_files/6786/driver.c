#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1197937750;
signed char var_5 = (signed char)-112;
long long int var_6 = -6517324278218978754LL;
unsigned short var_8 = (unsigned short)20896;
int var_10 = -215940936;
unsigned long long int var_11 = 6276162373473160597ULL;
signed char var_16 = (signed char)-51;
int zero = 0;
signed char var_17 = (signed char)111;
unsigned short var_18 = (unsigned short)32507;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
