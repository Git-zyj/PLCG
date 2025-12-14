#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8242965303965734607LL;
unsigned int var_2 = 4254798504U;
unsigned long long int var_4 = 10245626037331796582ULL;
short var_5 = (short)32324;
int var_6 = -475915275;
int zero = 0;
int var_10 = 1945195610;
long long int var_11 = 5433758581823613781LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
