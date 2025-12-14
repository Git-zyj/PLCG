#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-58;
unsigned int var_3 = 889316771U;
int var_5 = -1106204046;
long long int var_7 = -5424864756216612840LL;
signed char var_8 = (signed char)-98;
unsigned long long int var_10 = 7800682305565460188ULL;
unsigned char var_16 = (unsigned char)83;
int zero = 0;
int var_18 = -1754228505;
unsigned int var_19 = 612972555U;
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
