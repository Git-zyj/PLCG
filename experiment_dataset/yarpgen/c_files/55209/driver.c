#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-29;
unsigned int var_2 = 1546607356U;
short var_3 = (short)-17442;
int var_7 = 786531040;
unsigned short var_9 = (unsigned short)47460;
unsigned char var_10 = (unsigned char)196;
unsigned long long int var_11 = 11187694179193418495ULL;
unsigned char var_12 = (unsigned char)178;
short var_15 = (short)32492;
int var_16 = 948142153;
unsigned int var_17 = 392140148U;
int zero = 0;
unsigned long long int var_18 = 11225140403783662286ULL;
int var_19 = -1863973520;
unsigned int var_20 = 4182602543U;
int var_21 = 375386025;
unsigned int var_22 = 1530486341U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
