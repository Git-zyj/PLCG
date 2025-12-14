#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-64;
long long int var_3 = 8892212784151807981LL;
long long int var_4 = -11753808529021758LL;
long long int var_7 = -9217269475432957811LL;
unsigned long long int var_11 = 6317230374271505699ULL;
int zero = 0;
short var_12 = (short)-10618;
unsigned char var_13 = (unsigned char)163;
signed char var_14 = (signed char)-43;
unsigned int var_15 = 3184625707U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
