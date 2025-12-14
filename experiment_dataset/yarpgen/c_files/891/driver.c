#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-4862;
short var_6 = (short)-975;
long long int var_10 = 1291137397957498787LL;
int zero = 0;
long long int var_18 = 6182756000578948212LL;
unsigned int var_19 = 2671875766U;
unsigned int var_20 = 3094094629U;
signed char var_21 = (signed char)-10;
void init() {
}

void checksum() {
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
