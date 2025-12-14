/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((-(((~var_5) | var_1))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_11 = (~7);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [2] [i_2] [i_2] [i_4] |= (((((max((arr_0 [i_3]), var_5))) ? (((arr_2 [i_3]) << (var_3 - 1240138760))) : (~var_7))));
                                var_12 = (min(var_12, ((((((((arr_13 [13] [6] [12] [i_3] [i_3]) && var_3)) ? (((var_7 ? var_2 : var_9))) : (~18))) != (((~(((arr_11 [i_3] [i_1] [i_2] [i_3] [i_4]) ^ var_7))))))))));
                                arr_15 [i_0] [i_4] [i_2] [i_3] [i_4] [i_2] [i_4] = ((+((1 << (((-1530675459 + 1530675490) - 1))))));
                                arr_16 [4] [i_3] [i_2] [i_1] [i_0] = (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [13]);
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_25 [i_7] [i_5] [1] [i_7] [i_7] &= var_0;
                        arr_26 [i_5 - 3] [i_5] = (((arr_5 [i_0] [i_7]) ? ((((arr_20 [i_5 - 3]) ? (arr_20 [i_7]) : (arr_20 [i_0])))) : ((2140933301 ? 234 : 0))));
                        var_13 = ((!(1440457669 != 254)));
                    }
                }
            }
        }
        var_14 = (max(var_14, 8257697911398925614));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 21;i_8 += 1)
    {
        arr_30 [15] [i_8] = var_7;
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    {
                        var_15 = (min(var_15, var_6));
                        arr_37 [1] [1] [5] [i_11] = (arr_29 [i_8 - 1]);
                        arr_38 [i_8 - 1] [i_10] = var_0;
                    }
                }
            }
        }
    }
    for (int i_12 = 1; i_12 < 22;i_12 += 1)
    {
        arr_41 [i_12] = (min(((((((var_9 ? var_9 : var_8))) ? ((var_7 ^ (arr_39 [i_12]))) : ((var_0 ? var_2 : var_3))))), (var_0 & var_1)));
        var_16 -= (((((((max((arr_39 [i_12]), var_5))) || (~var_8)))) < (var_2 == var_2)));
        arr_42 [i_12] = ((arr_40 [i_12 + 1]) * (arr_39 [i_12 + 2]));
        var_17 = var_7;
    }
    #pragma endscop
}
