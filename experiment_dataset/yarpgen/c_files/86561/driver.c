#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7177724924890618184LL;
unsigned long long int var_5 = 12092621333220946560ULL;
unsigned char var_6 = (unsigned char)155;
signed char var_11 = (signed char)-72;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)45669;
_Bool var_14 = (_Bool)0;
long long int var_15 = 4727849429507755794LL;
void init() {
}

void checksum() {
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
