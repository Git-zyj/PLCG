#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1385522649820804462LL;
unsigned char var_4 = (unsigned char)190;
unsigned char var_5 = (unsigned char)31;
unsigned char var_7 = (unsigned char)164;
int var_8 = 603011220;
long long int var_9 = 8447412013945319029LL;
unsigned long long int var_10 = 2846263971796806213ULL;
long long int var_12 = 3691669229572655855LL;
int zero = 0;
int var_13 = 2127591647;
long long int var_14 = 3120762672006173882LL;
long long int var_15 = 2154512922064498742LL;
void init() {
}

void checksum() {
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
