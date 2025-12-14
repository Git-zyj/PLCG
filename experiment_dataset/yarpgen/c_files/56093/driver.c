#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)60356;
unsigned long long int var_11 = 9469038487971749130ULL;
unsigned short var_12 = (unsigned short)8052;
int zero = 0;
unsigned long long int var_17 = 10860384016165889709ULL;
unsigned short var_18 = (unsigned short)36411;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
