#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-24;
unsigned short var_3 = (unsigned short)26756;
unsigned short var_5 = (unsigned short)41319;
unsigned long long int var_7 = 2290772220987777961ULL;
unsigned long long int var_8 = 15554403760343005793ULL;
signed char var_10 = (signed char)56;
long long int var_11 = 3804232192575912219LL;
int var_12 = 661125629;
int zero = 0;
long long int var_14 = 2130321567556831693LL;
signed char var_15 = (signed char)-116;
unsigned long long int var_16 = 2186591939866551389ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
