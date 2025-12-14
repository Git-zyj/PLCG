#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)252;
signed char var_3 = (signed char)22;
unsigned char var_4 = (unsigned char)220;
unsigned long long int var_5 = 9600834271275505379ULL;
long long int var_11 = 3468946369574376527LL;
int zero = 0;
unsigned char var_17 = (unsigned char)181;
signed char var_18 = (signed char)37;
int var_19 = -482272234;
short var_20 = (short)193;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
