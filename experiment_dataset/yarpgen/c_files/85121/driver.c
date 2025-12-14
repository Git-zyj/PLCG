#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29964;
unsigned long long int var_2 = 1762188303506573580ULL;
long long int var_4 = 1765786375403227543LL;
unsigned char var_6 = (unsigned char)1;
long long int var_7 = 3994090630913265663LL;
short var_8 = (short)-32099;
long long int var_9 = 5484029901271731187LL;
signed char var_11 = (signed char)65;
long long int var_12 = -4777921097328615470LL;
unsigned short var_13 = (unsigned short)13663;
unsigned long long int var_15 = 14681719649724076219ULL;
int zero = 0;
short var_17 = (short)-16615;
long long int var_18 = -6653068221380731018LL;
unsigned short var_19 = (unsigned short)33607;
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
