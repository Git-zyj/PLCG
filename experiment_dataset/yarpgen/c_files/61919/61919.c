/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((((max((var_5 & -1), -1))) > var_17));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((((!(arr_4 [i_1] [i_0]))) ? 1 : ((-(((arr_1 [i_0]) ? (arr_2 [8] [i_1] [i_1]) : (arr_1 [i_1]))))))))));
                var_20 = ((((((max(12, (arr_4 [i_0 + 2] [i_1]))) * (arr_1 [i_0 + 2])))) % (arr_3 [i_0 - 1] [i_1 - 1])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_21 = (max(var_21, (((max((64584 <= 15), (((arr_6 [i_2]) * (arr_8 [i_2])))))))));
        arr_10 [i_2] = (arr_7 [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_22 -= arr_11 [i_3 - 1];
        arr_15 [i_3 - 1] [i_3] = ((1 ? (arr_8 [i_3 - 1]) : (arr_8 [i_3 - 1])));
    }
    #pragma endscop
}
