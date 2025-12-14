#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 7550776653576785663ULL;
unsigned long long int var_8 = 4774412723013974956ULL;
long long int var_9 = -2912697338752329203LL;
signed char var_10 = (signed char)109;
int zero = 0;
signed char var_13 = (signed char)-116;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 434675038U;
unsigned long long int var_16 = 2379822638437705613ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
