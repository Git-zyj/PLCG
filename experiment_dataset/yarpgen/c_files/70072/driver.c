#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8709947003257352065LL;
signed char var_12 = (signed char)-93;
unsigned int var_17 = 2923345756U;
long long int var_18 = -1764349565018660774LL;
int zero = 0;
signed char var_20 = (signed char)-105;
unsigned long long int var_21 = 12219024464197893651ULL;
int var_22 = -1467492822;
int var_23 = 1419099429;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
