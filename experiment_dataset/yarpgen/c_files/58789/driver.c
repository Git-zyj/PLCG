#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15582095667239013781ULL;
unsigned short var_4 = (unsigned short)50272;
int var_5 = -30985518;
unsigned long long int var_8 = 15622730351016164429ULL;
int var_10 = 1989103373;
signed char var_11 = (signed char)-45;
short var_12 = (short)28865;
unsigned int var_13 = 1117571341U;
int zero = 0;
unsigned char var_19 = (unsigned char)82;
unsigned long long int var_20 = 1299119140114533089ULL;
int var_21 = 699394717;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
