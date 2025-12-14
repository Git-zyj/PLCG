#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)125;
signed char var_3 = (signed char)-60;
int var_8 = -1342380716;
signed char var_9 = (signed char)84;
int var_13 = -1265235174;
int zero = 0;
int var_19 = -1028645463;
int var_20 = -181702820;
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
