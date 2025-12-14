#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 837854715500340408LL;
unsigned long long int var_3 = 5557758141365013961ULL;
int var_6 = -662073994;
unsigned long long int var_8 = 10298720076898118804ULL;
long long int var_9 = -954682740065756080LL;
unsigned char var_10 = (unsigned char)13;
int zero = 0;
unsigned long long int var_12 = 4021829902170046375ULL;
unsigned long long int var_13 = 9095105423052475598ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
