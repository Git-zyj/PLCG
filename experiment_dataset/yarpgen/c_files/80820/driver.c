#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)246;
unsigned int var_3 = 995558652U;
unsigned long long int var_4 = 4333074645640180514ULL;
unsigned long long int var_7 = 4364326408226488625ULL;
unsigned long long int var_15 = 3954681163778519453ULL;
int zero = 0;
unsigned int var_20 = 2512098025U;
unsigned char var_21 = (unsigned char)11;
long long int var_22 = 4366454497556127734LL;
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
