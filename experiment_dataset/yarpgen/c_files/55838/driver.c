#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8963150483523929260LL;
signed char var_2 = (signed char)122;
unsigned long long int var_5 = 16789091252989570098ULL;
long long int var_6 = -6988926462305031129LL;
unsigned long long int var_7 = 10361761449815771545ULL;
int var_9 = 1965509395;
unsigned long long int var_10 = 4746554172520928114ULL;
signed char var_12 = (signed char)-66;
unsigned char var_14 = (unsigned char)0;
unsigned int var_15 = 2607937684U;
int zero = 0;
short var_16 = (short)25134;
unsigned short var_17 = (unsigned short)45707;
long long int var_18 = -5345007924081004163LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
