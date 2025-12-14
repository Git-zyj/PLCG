#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2417256522465245694LL;
signed char var_2 = (signed char)63;
long long int var_4 = 6251605868098225204LL;
long long int var_5 = 7509375108460187277LL;
long long int var_6 = 7376835107455979917LL;
signed char var_7 = (signed char)100;
long long int var_8 = 5469364914758112787LL;
signed char var_9 = (signed char)109;
signed char var_10 = (signed char)61;
unsigned long long int var_11 = 8633202232936506391ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)54644;
signed char var_13 = (signed char)-121;
short var_14 = (short)20757;
unsigned int var_15 = 332758083U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
