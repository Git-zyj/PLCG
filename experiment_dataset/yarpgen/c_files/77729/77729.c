/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0 + 1] |= ((-(arr_0 [i_0 + 4])));
        arr_3 [13] = -25630;
        arr_4 [i_0 - 4] [i_0] |= (max((min(((25627 ? var_4 : 2354642815176171345)), ((min((arr_1 [i_0]), var_11))))), var_6));
        arr_5 [i_0] = 1;
    }

    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_15 = ((((!(arr_6 [i_1]))) || (52 * -var_6)));
        arr_8 [i_1] = (min(1741948091, ((((min(21171, 1893458893))) ? (((min((arr_6 [i_1]), var_11)))) : -2354642815176171340))));
        arr_9 [i_1] = ((1 ? ((-3197 ? 1 : 1)) : (min(-1434982145, (arr_6 [i_1])))));
        var_16 ^= (max(var_6, 204));
    }
    #pragma endscop
}
