#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12885;
long long int var_3 = -2921455135045676214LL;
unsigned int var_7 = 894599297U;
unsigned long long int var_9 = 5598640648876847906ULL;
signed char var_10 = (signed char)-72;
unsigned long long int var_11 = 5969425606716263580ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)16363;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
