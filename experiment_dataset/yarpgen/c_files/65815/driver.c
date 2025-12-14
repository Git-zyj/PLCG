#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55170;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 14301033660151992285ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)50219;
int var_7 = 629851254;
unsigned long long int var_9 = 4398446136288326221ULL;
int zero = 0;
unsigned int var_10 = 1973779681U;
unsigned short var_11 = (unsigned short)64233;
unsigned long long int var_12 = 11130063549044675325ULL;
unsigned long long int var_13 = 6465946774667648099ULL;
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
