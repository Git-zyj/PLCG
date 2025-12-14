#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14083201852353693155ULL;
unsigned long long int var_2 = 16175403630145455191ULL;
unsigned long long int var_3 = 17913693129032282728ULL;
unsigned long long int var_6 = 6918231613723883519ULL;
unsigned long long int var_9 = 10102677689349565927ULL;
unsigned long long int var_11 = 2907604585434319172ULL;
unsigned long long int var_13 = 3628821782782725777ULL;
unsigned long long int var_14 = 847426308285035413ULL;
unsigned long long int var_15 = 15032400716533053843ULL;
int zero = 0;
unsigned long long int var_17 = 9793497236576544640ULL;
unsigned long long int var_18 = 6081328012361381613ULL;
unsigned long long int var_19 = 12803765373692140760ULL;
unsigned long long int var_20 = 7971355121912452281ULL;
unsigned long long int var_21 = 6740295346717379699ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
