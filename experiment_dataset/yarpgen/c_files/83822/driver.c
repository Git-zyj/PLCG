#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)120;
unsigned short var_2 = (unsigned short)36881;
signed char var_3 = (signed char)6;
unsigned long long int var_7 = 7514543556810478285ULL;
short var_11 = (short)-18684;
unsigned char var_13 = (unsigned char)146;
signed char var_15 = (signed char)69;
int zero = 0;
unsigned char var_18 = (unsigned char)105;
int var_19 = 982031568;
unsigned long long int var_20 = 15059310792525628851ULL;
long long int var_21 = 3444388666974802421LL;
unsigned short var_22 = (unsigned short)32615;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
