#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8782009301647051108LL;
unsigned long long int var_2 = 9890173380902768996ULL;
signed char var_3 = (signed char)126;
unsigned long long int var_5 = 5803054026020386442ULL;
signed char var_7 = (signed char)108;
int var_8 = 1060646789;
unsigned short var_10 = (unsigned short)60989;
int zero = 0;
unsigned short var_12 = (unsigned short)61180;
long long int var_13 = -7434985850757837639LL;
int var_14 = -894913775;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
