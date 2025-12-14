/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = (~3160678551);
        var_17 *= (((arr_1 [i_0]) ? 65525 : (arr_1 [i_0])));
    }
    var_18 = (~var_9);
    var_19 = (var_12 && var_9);

    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = ((~(arr_5 [i_1])));
        var_20 = (!((!(arr_4 [i_1] [i_1]))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_21 *= ((((((arr_8 [i_2]) ? (~32765) : (arr_7 [i_2])))) || (arr_8 [i_2])));
        var_22 = (1 / var_14);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    {
                        var_23 = ((-(((arr_10 [i_4 - 1]) ? (arr_10 [i_4 + 1]) : (arr_12 [i_4 + 1] [i_5 + 1] [i_4] [i_3])))));
                        var_24 = (arr_7 [i_3]);

                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            var_25 = ((!(var_3 > 32760)));
                            var_26 = 16568;
                            var_27 = (~var_3);
                            var_28 = 32767;
                        }
                    }
                }
            }
        }
        var_29 = (arr_16 [4]);
        arr_18 [i_2] = (max((((arr_8 [i_2]) ? (arr_7 [i_2]) : (arr_7 [i_2]))), -var_4));
    }
    #pragma endscop
}
