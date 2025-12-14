#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11877;
long long int var_2 = 5499054501328381993LL;
unsigned char var_3 = (unsigned char)95;
signed char var_5 = (signed char)93;
unsigned long long int var_6 = 10149505553154872123ULL;
unsigned int var_7 = 1743698873U;
long long int var_10 = -1323877316584268223LL;
long long int var_11 = 1318036328601965330LL;
signed char var_12 = (signed char)-67;
int zero = 0;
signed char var_16 = (signed char)126;
unsigned int var_17 = 1347087U;
unsigned short var_18 = (unsigned short)4082;
unsigned int var_19 = 2067125648U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
