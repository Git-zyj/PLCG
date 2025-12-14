#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)96;
signed char var_2 = (signed char)-42;
unsigned char var_5 = (unsigned char)157;
unsigned long long int var_8 = 18139364046051306776ULL;
signed char var_9 = (signed char)70;
int zero = 0;
unsigned long long int var_12 = 3598418935612869972ULL;
unsigned long long int var_13 = 17620635206981921510ULL;
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
