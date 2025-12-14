#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4141718940U;
unsigned int var_5 = 1001550057U;
signed char var_6 = (signed char)-125;
unsigned int var_7 = 434689588U;
int var_8 = 302864604;
unsigned int var_9 = 3295005693U;
unsigned int var_10 = 2125956732U;
unsigned int var_11 = 42111558U;
unsigned int var_15 = 2300451968U;
int var_16 = 777597952;
int zero = 0;
unsigned int var_17 = 3723862717U;
int var_18 = -1138051528;
unsigned long long int var_19 = 11928015227821570399ULL;
signed char var_20 = (signed char)-28;
unsigned char var_21 = (unsigned char)226;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
