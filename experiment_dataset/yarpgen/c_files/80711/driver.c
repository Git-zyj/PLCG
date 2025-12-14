#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_4 = 633590675U;
long long int var_5 = 830525944255251996LL;
unsigned long long int var_6 = 14305878789072512204ULL;
unsigned int var_8 = 1423029981U;
short var_10 = (short)-4051;
signed char var_13 = (signed char)67;
int zero = 0;
signed char var_15 = (signed char)-124;
unsigned int var_16 = 2942418929U;
unsigned short var_17 = (unsigned short)64958;
signed char var_18 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
