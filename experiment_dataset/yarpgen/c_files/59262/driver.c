#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)60665;
int var_7 = -1852006895;
int var_9 = 1279828520;
short var_13 = (short)31962;
int zero = 0;
long long int var_14 = 7646294487566909104LL;
signed char var_15 = (signed char)-47;
long long int var_16 = 4278711473386582018LL;
unsigned long long int var_17 = 4156388576238871751ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
