#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)66;
unsigned long long int var_1 = 9511766529266111785ULL;
unsigned long long int var_2 = 12278037832005747078ULL;
unsigned long long int var_4 = 3791095621373346258ULL;
unsigned char var_5 = (unsigned char)13;
unsigned long long int var_8 = 16586066412334304506ULL;
unsigned char var_9 = (unsigned char)216;
unsigned char var_10 = (unsigned char)47;
unsigned char var_11 = (unsigned char)178;
unsigned char var_13 = (unsigned char)27;
int zero = 0;
unsigned long long int var_14 = 14839543585856592817ULL;
unsigned long long int var_15 = 1107358064367756777ULL;
unsigned char var_16 = (unsigned char)87;
unsigned char var_17 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
