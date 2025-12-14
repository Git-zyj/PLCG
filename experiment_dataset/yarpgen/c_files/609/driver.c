#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -637006275707258038LL;
long long int var_2 = 6142644390478377918LL;
long long int var_3 = -3245152021627522566LL;
long long int var_4 = 4787913910041402415LL;
long long int var_6 = -1656388506411157092LL;
long long int var_8 = -1677099174263877954LL;
long long int var_18 = -4878220750082506486LL;
long long int var_19 = -2453442339754512469LL;
int zero = 0;
long long int var_20 = 5121099455148890982LL;
long long int var_21 = -4911629835185663619LL;
long long int var_22 = 3769930896329868520LL;
void init() {
}

void checksum() {
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
