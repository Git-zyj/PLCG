#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8708840195871459506ULL;
unsigned long long int var_3 = 5456267912411143844ULL;
int var_4 = -1116928878;
unsigned int var_5 = 885262505U;
int var_13 = 562428072;
signed char var_14 = (signed char)-19;
unsigned short var_16 = (unsigned short)1916;
int zero = 0;
signed char var_18 = (signed char)-115;
signed char var_19 = (signed char)-85;
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
