#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7444437701442926447LL;
unsigned int var_2 = 2938890948U;
long long int var_4 = 361592063276674583LL;
unsigned short var_5 = (unsigned short)35483;
signed char var_6 = (signed char)16;
long long int var_7 = 7329095950470314852LL;
int zero = 0;
signed char var_12 = (signed char)9;
signed char var_13 = (signed char)75;
unsigned int var_14 = 3230966452U;
long long int var_15 = 788494503641073912LL;
void init() {
}

void checksum() {
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
