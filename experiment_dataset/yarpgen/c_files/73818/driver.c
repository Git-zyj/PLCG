#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-45;
unsigned long long int var_4 = 9263356563329555814ULL;
_Bool var_6 = (_Bool)1;
signed char var_11 = (signed char)-72;
int var_12 = 1090709959;
int zero = 0;
short var_18 = (short)-297;
long long int var_19 = -4635442074211280517LL;
int var_20 = -69583296;
unsigned long long int var_21 = 11900820025645985929ULL;
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
