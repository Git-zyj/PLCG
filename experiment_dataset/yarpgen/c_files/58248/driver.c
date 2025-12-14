#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2145146691U;
unsigned char var_3 = (unsigned char)155;
unsigned short var_5 = (unsigned short)23125;
short var_6 = (short)8939;
long long int var_9 = -1007158619967168959LL;
short var_10 = (short)25461;
int zero = 0;
unsigned short var_11 = (unsigned short)14642;
unsigned char var_12 = (unsigned char)89;
signed char var_13 = (signed char)-23;
unsigned short var_14 = (unsigned short)9290;
signed char var_15 = (signed char)-8;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
