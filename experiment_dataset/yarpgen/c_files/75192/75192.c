/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_8 & var_3);
    var_15 = var_4;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_10 [i_1] = ((((min((arr_4 [i_1]), (((!(arr_6 [i_0] [i_2]))))))) && ((((arr_3 [i_1] [i_3]) & var_11)))));
                        var_16 = (arr_0 [i_1]);
                    }
                }
            }
        }
        var_17 = (min(14210792054646232324, -124));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 23;i_4 += 1)
    {
        var_18 = arr_11 [19];
        var_19 = (max(var_19, (((!(arr_13 [0]))))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_20 = 123;
        var_21 = (((((arr_13 [i_5]) && (arr_9 [9] [i_5] [i_5]))) ? (arr_16 [i_5]) : (arr_0 [i_5])));
        var_22 = (min(var_22, 0));
        var_23 &= ((~(arr_5 [i_5])));
    }
    var_24 = (max(var_6, var_4));
    var_25 = (~10247549815644467056);
    #pragma endscop
}
