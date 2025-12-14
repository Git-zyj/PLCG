#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -420067851;
int var_4 = 1305294727;
int var_5 = 64536558;
signed char var_6 = (signed char)86;
unsigned short var_9 = (unsigned short)20539;
long long int var_12 = -8507833404906132320LL;
int zero = 0;
unsigned long long int var_13 = 14591004220330622425ULL;
long long int var_14 = -8047272077845773195LL;
unsigned int var_15 = 4254678038U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
