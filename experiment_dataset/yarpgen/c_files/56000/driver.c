#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)7;
unsigned short var_7 = (unsigned short)2659;
unsigned long long int var_9 = 6675777216358502283ULL;
short var_12 = (short)23317;
int zero = 0;
unsigned long long int var_17 = 3497569907224792253ULL;
unsigned long long int var_18 = 894142611437232709ULL;
signed char var_19 = (signed char)14;
unsigned short var_20 = (unsigned short)29076;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
