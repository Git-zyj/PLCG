#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)39;
unsigned int var_1 = 4267328802U;
signed char var_4 = (signed char)-27;
unsigned char var_6 = (unsigned char)45;
signed char var_8 = (signed char)-109;
unsigned int var_9 = 2711625817U;
unsigned char var_10 = (unsigned char)103;
int zero = 0;
long long int var_11 = 5009684284474526964LL;
long long int var_12 = 2469456541431363940LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
