#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 405023139;
long long int var_1 = 6868552782955320211LL;
long long int var_4 = 7063985687466868945LL;
short var_6 = (short)-19326;
unsigned int var_8 = 2728262492U;
short var_9 = (short)7185;
long long int var_10 = 8872442655354492662LL;
unsigned long long int var_12 = 3311356176130963729ULL;
unsigned int var_14 = 1411093688U;
unsigned char var_15 = (unsigned char)57;
unsigned char var_19 = (unsigned char)101;
int zero = 0;
short var_20 = (short)-2625;
unsigned short var_21 = (unsigned short)18380;
unsigned long long int var_22 = 13037102755222471606ULL;
short var_23 = (short)-9585;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
