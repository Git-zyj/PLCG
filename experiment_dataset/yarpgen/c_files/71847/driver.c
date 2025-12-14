#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49587;
signed char var_4 = (signed char)-62;
unsigned short var_5 = (unsigned short)23265;
short var_7 = (short)-9902;
signed char var_8 = (signed char)56;
unsigned long long int var_9 = 6532791524820307850ULL;
unsigned long long int var_10 = 1624246527565722315ULL;
unsigned char var_11 = (unsigned char)15;
unsigned char var_12 = (unsigned char)188;
unsigned char var_14 = (unsigned char)49;
signed char var_16 = (signed char)-25;
unsigned int var_18 = 112726795U;
int zero = 0;
long long int var_19 = -6969398012905561446LL;
long long int var_20 = -7351912324198692418LL;
signed char var_21 = (signed char)40;
int var_22 = -1318457226;
void init() {
}

void checksum() {
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
