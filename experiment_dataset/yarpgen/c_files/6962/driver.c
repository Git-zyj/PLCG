#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)49;
unsigned int var_4 = 2945184129U;
long long int var_5 = -1913872802449229610LL;
signed char var_12 = (signed char)19;
int zero = 0;
unsigned long long int var_17 = 7589525052977913680ULL;
unsigned long long int var_18 = 17805312145868763774ULL;
unsigned char var_19 = (unsigned char)20;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
