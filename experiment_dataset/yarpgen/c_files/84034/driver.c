#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7568284685255058069LL;
int var_2 = 717017382;
signed char var_9 = (signed char)-46;
unsigned short var_10 = (unsigned short)23290;
int var_11 = 1669558297;
unsigned int var_15 = 2892179765U;
long long int var_17 = 6484599535173223066LL;
int zero = 0;
unsigned char var_18 = (unsigned char)209;
unsigned long long int var_19 = 13441980921003097201ULL;
int var_20 = -507440539;
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
