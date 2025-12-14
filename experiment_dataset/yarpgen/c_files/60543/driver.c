#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13377446936436413675ULL;
long long int var_1 = 2641659496497185534LL;
unsigned short var_2 = (unsigned short)8155;
unsigned int var_3 = 642432612U;
long long int var_4 = 3790651395650480376LL;
unsigned char var_5 = (unsigned char)40;
unsigned long long int var_6 = 16960523036354875053ULL;
long long int var_7 = 2853292339634565092LL;
unsigned int var_9 = 3211445520U;
int var_11 = 279210772;
int zero = 0;
unsigned short var_12 = (unsigned short)1440;
long long int var_13 = -5298863944765397878LL;
unsigned short var_14 = (unsigned short)30212;
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
