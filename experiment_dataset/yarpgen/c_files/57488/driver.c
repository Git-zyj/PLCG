#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)121;
unsigned char var_2 = (unsigned char)196;
unsigned long long int var_3 = 18429054876624159832ULL;
long long int var_5 = 3060765638211061159LL;
unsigned long long int var_6 = 6110858885553780071ULL;
int var_7 = -155780424;
unsigned short var_8 = (unsigned short)25740;
int var_9 = 577318317;
int var_11 = -1018666753;
long long int var_12 = 9213734577165438719LL;
unsigned long long int var_13 = 7568160586884763915ULL;
unsigned char var_14 = (unsigned char)155;
int zero = 0;
unsigned long long int var_15 = 13739268067137336687ULL;
unsigned char var_16 = (unsigned char)195;
long long int var_17 = 5610139145733102740LL;
unsigned int var_18 = 497122634U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
