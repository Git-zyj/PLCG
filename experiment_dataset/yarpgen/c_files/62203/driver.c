#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
unsigned long long int var_3 = 4305755748970196531ULL;
int var_4 = -2074692180;
int var_6 = -1603734820;
long long int var_7 = -3361693101595107039LL;
unsigned int var_8 = 3146903897U;
int zero = 0;
unsigned short var_16 = (unsigned short)23029;
int var_17 = 526015381;
int var_18 = -339262762;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
