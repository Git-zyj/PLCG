#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7571838424142411179LL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 14692361938201867644ULL;
int var_9 = -1376655326;
int var_13 = 1965170579;
int zero = 0;
unsigned int var_17 = 3720101925U;
long long int var_18 = 7852923068638630130LL;
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
