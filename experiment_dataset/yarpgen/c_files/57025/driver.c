#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13453452016731021330ULL;
long long int var_1 = 992568439960339443LL;
long long int var_2 = 5180086146960957259LL;
signed char var_3 = (signed char)-92;
int var_5 = -995888458;
int var_6 = 1567436748;
signed char var_7 = (signed char)76;
unsigned long long int var_8 = 1923801100175704023ULL;
long long int var_10 = 3275053634785500686LL;
long long int var_12 = 8901649493804419748LL;
unsigned char var_14 = (unsigned char)219;
int var_15 = -94238401;
int zero = 0;
unsigned long long int var_17 = 15615777087147679010ULL;
unsigned short var_18 = (unsigned short)27035;
signed char var_19 = (signed char)91;
unsigned long long int var_20 = 13338837363997695066ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
