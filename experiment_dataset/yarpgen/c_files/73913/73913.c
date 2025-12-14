/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_13;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] &= (((arr_0 [i_0]) ? ((max(var_14, (arr_1 [i_0] [i_0])))) : ((10060890583657333692 ? var_7 : var_11))));
        arr_4 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = (arr_6 [i_1]);
        arr_10 [i_1] = 60;
        arr_11 [i_1] = 0;
        arr_12 [i_1] [i_1] = ((~(max(83, 1354788420903882921))));
    }
    var_19 = (max(((var_15 % ((195 ? 18055274118470527438 : var_10)))), (~-var_14)));
    #pragma endscop
}
