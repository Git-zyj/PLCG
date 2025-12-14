#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)3;
unsigned long long int var_2 = 15602858424680862881ULL;
unsigned int var_3 = 1684617596U;
unsigned char var_4 = (unsigned char)130;
unsigned long long int var_5 = 1308114309566905622ULL;
signed char var_6 = (signed char)119;
short var_7 = (short)-17470;
unsigned int var_9 = 3993359238U;
int zero = 0;
signed char var_11 = (signed char)-32;
signed char var_12 = (signed char)14;
unsigned char var_13 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
