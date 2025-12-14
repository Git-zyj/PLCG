#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)15657;
unsigned long long int var_3 = 13351651795170409477ULL;
short var_5 = (short)-26646;
unsigned char var_6 = (unsigned char)121;
short var_7 = (short)11037;
unsigned char var_9 = (unsigned char)94;
unsigned long long int var_10 = 8671794463100328453ULL;
short var_12 = (short)25974;
long long int var_13 = 4167686634246627740LL;
unsigned int var_14 = 3272997814U;
short var_16 = (short)16959;
int zero = 0;
int var_18 = 523161468;
unsigned long long int var_19 = 7352340524365123510ULL;
signed char var_20 = (signed char)-97;
unsigned char var_21 = (unsigned char)195;
unsigned char var_22 = (unsigned char)16;
unsigned char var_23 = (unsigned char)17;
short var_24 = (short)-4917;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
