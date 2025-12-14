#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-2;
unsigned short var_5 = (unsigned short)2498;
int var_6 = -1838940664;
unsigned short var_8 = (unsigned short)13547;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 1178175043951989034ULL;
int zero = 0;
long long int var_14 = 3163725666945345961LL;
unsigned long long int var_15 = 15692229852743234092ULL;
long long int var_16 = 3003328526377459128LL;
unsigned long long int var_17 = 17529237541792508846ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
