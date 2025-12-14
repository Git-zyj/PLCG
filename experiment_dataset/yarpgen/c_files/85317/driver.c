#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25565;
unsigned long long int var_5 = 1469053884220776378ULL;
unsigned long long int var_12 = 13066485490327151268ULL;
signed char var_13 = (signed char)25;
int zero = 0;
unsigned long long int var_17 = 9920034573109869105ULL;
int var_18 = -2026361630;
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
