#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2513080020U;
long long int var_1 = -1113539085291891858LL;
signed char var_2 = (signed char)-123;
short var_5 = (short)-22854;
long long int var_7 = 1468465484253753601LL;
short var_8 = (short)-1274;
long long int var_9 = -5181401757371359519LL;
unsigned int var_10 = 3346472742U;
short var_11 = (short)9036;
short var_12 = (short)-27529;
unsigned char var_13 = (unsigned char)15;
unsigned long long int var_15 = 16193854214754702750ULL;
int zero = 0;
long long int var_16 = -1492222435366049041LL;
long long int var_17 = -1186261645472818832LL;
int var_18 = -1998519250;
signed char var_19 = (signed char)-53;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
