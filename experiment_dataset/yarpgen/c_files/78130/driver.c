#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3702799176822013302LL;
long long int var_1 = 5754022038202336057LL;
long long int var_2 = -3489197349549999381LL;
long long int var_3 = -4545306413928116374LL;
long long int var_4 = 7663184029293009243LL;
long long int var_5 = -2133635665524012139LL;
long long int var_6 = -5521073743076131716LL;
long long int var_7 = -5700207291462618105LL;
long long int var_9 = -2487315578285975943LL;
long long int var_12 = -5069926337770504633LL;
long long int var_13 = -2391664412325137077LL;
long long int var_14 = 5626027430019665866LL;
long long int var_16 = -7981320106220166664LL;
long long int var_17 = 8123283169238268019LL;
long long int var_19 = -4683614875673467579LL;
int zero = 0;
long long int var_20 = 7925078806087532036LL;
long long int var_21 = -5587814901951273613LL;
long long int var_22 = -3020391172375359450LL;
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
