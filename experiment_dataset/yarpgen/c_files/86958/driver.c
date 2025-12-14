#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14157666458629569586ULL;
signed char var_1 = (signed char)39;
signed char var_3 = (signed char)67;
unsigned long long int var_4 = 2575487022060656619ULL;
unsigned char var_5 = (unsigned char)180;
unsigned int var_6 = 2801640740U;
int var_7 = -224892555;
unsigned long long int var_8 = 851365991680340797ULL;
signed char var_9 = (signed char)-41;
int zero = 0;
unsigned char var_10 = (unsigned char)175;
short var_11 = (short)-5804;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
