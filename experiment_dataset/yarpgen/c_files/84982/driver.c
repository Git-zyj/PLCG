#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-64;
short var_5 = (short)-26992;
_Bool var_9 = (_Bool)0;
long long int var_11 = -3746968782920753335LL;
unsigned int var_18 = 4129440078U;
int zero = 0;
unsigned long long int var_19 = 11689738322629158222ULL;
signed char var_20 = (signed char)-48;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)182;
void init() {
}

void checksum() {
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
