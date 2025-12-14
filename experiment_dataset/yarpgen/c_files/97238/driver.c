#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
short var_1 = (short)-620;
unsigned long long int var_2 = 5068594440182032497ULL;
long long int var_4 = 4398297733348248064LL;
unsigned long long int var_6 = 4971447785590825164ULL;
long long int var_8 = 6455314185777433921LL;
int var_9 = 1880994137;
long long int var_10 = -5233543500024686566LL;
int zero = 0;
unsigned char var_13 = (unsigned char)252;
unsigned long long int var_14 = 12543226949668006083ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
