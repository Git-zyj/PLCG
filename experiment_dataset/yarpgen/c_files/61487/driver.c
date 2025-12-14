#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 607567043;
unsigned int var_2 = 1196013248U;
long long int var_3 = -4209733717748648LL;
long long int var_4 = 4997457493840915937LL;
signed char var_7 = (signed char)115;
long long int var_12 = 4861045083465321868LL;
int zero = 0;
signed char var_13 = (signed char)-104;
unsigned int var_14 = 1338146115U;
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
