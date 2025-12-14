#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32889;
signed char var_2 = (signed char)-66;
short var_4 = (short)11022;
unsigned int var_5 = 3306658941U;
long long int var_6 = 5894380382830982578LL;
unsigned short var_8 = (unsigned short)61041;
unsigned int var_9 = 1342482192U;
unsigned char var_10 = (unsigned char)115;
int zero = 0;
long long int var_11 = -2315634493381275249LL;
long long int var_12 = 9124513925177124772LL;
unsigned char var_13 = (unsigned char)48;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
