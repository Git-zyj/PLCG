#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10634984606116623051ULL;
int var_2 = 750601734;
int var_3 = 2117480961;
short var_6 = (short)-27505;
short var_7 = (short)-12322;
long long int var_10 = 7697177307966775403LL;
int zero = 0;
unsigned long long int var_12 = 17594474506756486149ULL;
unsigned long long int var_13 = 5402364343662368586ULL;
short var_14 = (short)30452;
long long int var_15 = -557685211489011079LL;
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
