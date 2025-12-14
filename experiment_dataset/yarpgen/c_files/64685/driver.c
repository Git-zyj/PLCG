#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3696812153833272796LL;
unsigned long long int var_2 = 2233434124586272783ULL;
signed char var_3 = (signed char)-5;
long long int var_4 = -3062715049876074861LL;
unsigned int var_7 = 3270238084U;
signed char var_8 = (signed char)12;
unsigned short var_9 = (unsigned short)6569;
unsigned long long int var_11 = 15098963149565385837ULL;
long long int var_12 = 3760028759322259089LL;
int zero = 0;
unsigned short var_13 = (unsigned short)65309;
unsigned int var_14 = 2865837458U;
long long int var_15 = -1540256196031468081LL;
signed char var_16 = (signed char)-76;
unsigned int var_17 = 4266595710U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
