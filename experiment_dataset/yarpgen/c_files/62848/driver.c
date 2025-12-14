#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8682730794980792826LL;
signed char var_6 = (signed char)112;
unsigned short var_12 = (unsigned short)47072;
long long int var_13 = -6495650716895866313LL;
unsigned int var_15 = 1043191833U;
int zero = 0;
long long int var_18 = -4638810591009406874LL;
unsigned short var_19 = (unsigned short)15472;
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
