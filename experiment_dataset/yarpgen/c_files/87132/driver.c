#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)159;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 4611042728613024878ULL;
unsigned long long int var_8 = 15383141931479082286ULL;
unsigned short var_12 = (unsigned short)12235;
int zero = 0;
unsigned long long int var_13 = 15047437714192421752ULL;
unsigned int var_14 = 745800138U;
unsigned char var_15 = (unsigned char)17;
void init() {
}

void checksum() {
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
