#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7952251602478621211LL;
unsigned short var_1 = (unsigned short)11821;
unsigned short var_3 = (unsigned short)32278;
unsigned int var_9 = 1043859844U;
long long int var_10 = 5185223584180974191LL;
int zero = 0;
int var_13 = -535355745;
long long int var_14 = 7492724391594981916LL;
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
