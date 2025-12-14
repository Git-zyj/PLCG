#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14928367306827279684ULL;
unsigned int var_8 = 992806011U;
long long int var_9 = 4480323699433201648LL;
signed char var_12 = (signed char)-105;
unsigned long long int var_13 = 17944730683802982116ULL;
int zero = 0;
short var_19 = (short)-7041;
unsigned long long int var_20 = 13912075135889303730ULL;
void init() {
}

void checksum() {
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
