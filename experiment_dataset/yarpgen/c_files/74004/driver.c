#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25437;
int var_2 = 1767894565;
int var_3 = 1264026488;
unsigned long long int var_4 = 4909239305222402804ULL;
unsigned short var_5 = (unsigned short)12665;
short var_8 = (short)26223;
unsigned long long int var_9 = 6165557173613093814ULL;
int zero = 0;
unsigned long long int var_10 = 6992978774238158233ULL;
unsigned int var_11 = 716738102U;
int var_12 = -1507382706;
unsigned long long int var_13 = 16351213246114927042ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
