#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2034403585;
unsigned short var_7 = (unsigned short)39788;
signed char var_15 = (signed char)2;
unsigned long long int var_16 = 15186374464499939917ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)51018;
unsigned short var_21 = (unsigned short)55331;
unsigned long long int var_22 = 12947248385781997422ULL;
signed char var_23 = (signed char)-39;
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
