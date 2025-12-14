#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20693;
long long int var_2 = -2494993816770119917LL;
short var_3 = (short)-3820;
long long int var_5 = 2057007172995609744LL;
unsigned long long int var_7 = 4704316877106096539ULL;
short var_10 = (short)-14139;
int var_15 = -624001801;
long long int var_16 = -7743242095491796555LL;
int zero = 0;
short var_19 = (short)26132;
long long int var_20 = 5591242100505281857LL;
short var_21 = (short)-18865;
unsigned char var_22 = (unsigned char)225;
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
