#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10405785967635401805ULL;
unsigned short var_3 = (unsigned short)58515;
unsigned short var_5 = (unsigned short)48990;
unsigned int var_6 = 1035076424U;
unsigned int var_7 = 826974113U;
unsigned int var_8 = 3948316776U;
signed char var_10 = (signed char)-76;
unsigned long long int var_11 = 3094687648208119129ULL;
long long int var_15 = 3997100002260528052LL;
int zero = 0;
unsigned long long int var_17 = 4155293201374170858ULL;
signed char var_18 = (signed char)-98;
unsigned int var_19 = 4020581325U;
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
