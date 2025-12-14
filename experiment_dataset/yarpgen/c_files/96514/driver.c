#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)25247;
long long int var_4 = 8657046046291181966LL;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)161;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 3202492708U;
unsigned long long int var_20 = 3447013184786590128ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
