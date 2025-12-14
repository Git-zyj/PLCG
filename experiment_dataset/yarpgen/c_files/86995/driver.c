#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8426208020686220931LL;
int var_5 = 1406427134;
long long int var_7 = 1621806075890473016LL;
int var_9 = 154951101;
int zero = 0;
long long int var_11 = 5501480171456086379LL;
short var_12 = (short)-18883;
unsigned int var_13 = 3030428195U;
int var_14 = 1829009079;
unsigned int var_15 = 3414728401U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
