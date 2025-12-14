#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33829;
long long int var_6 = 8412863902302001228LL;
short var_7 = (short)-30958;
short var_12 = (short)-8014;
short var_13 = (short)13366;
unsigned char var_14 = (unsigned char)164;
unsigned long long int var_16 = 7686847320567986394ULL;
unsigned long long int var_17 = 11032823957925657685ULL;
short var_18 = (short)-24224;
int zero = 0;
long long int var_20 = 7565322128241166430LL;
unsigned short var_21 = (unsigned short)24121;
long long int var_22 = 1287221175610285771LL;
unsigned long long int var_23 = 6932339580577591986ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
