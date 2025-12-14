#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10125183791317707894ULL;
unsigned long long int var_1 = 8551139558117768226ULL;
unsigned long long int var_2 = 4961396556163693965ULL;
unsigned long long int var_3 = 2196483057811435093ULL;
unsigned short var_4 = (unsigned short)33527;
unsigned long long int var_5 = 15125212020171365545ULL;
unsigned long long int var_7 = 18117785485623355906ULL;
unsigned long long int var_10 = 7969482153327296855ULL;
int var_12 = 67247798;
unsigned long long int var_13 = 6511375162536725649ULL;
unsigned char var_14 = (unsigned char)128;
int zero = 0;
int var_15 = 342929065;
unsigned long long int var_16 = 5376266068728438510ULL;
unsigned long long int var_17 = 10720782257419074933ULL;
long long int var_18 = -3729649427944954910LL;
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
