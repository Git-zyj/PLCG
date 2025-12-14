#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1661634020;
long long int var_4 = 3551441604256545704LL;
short var_6 = (short)-13111;
unsigned int var_7 = 482343618U;
long long int var_9 = 2989534497357441336LL;
int zero = 0;
unsigned char var_20 = (unsigned char)3;
unsigned long long int var_21 = 10599074852688055280ULL;
short var_22 = (short)14064;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
