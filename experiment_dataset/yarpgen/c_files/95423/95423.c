/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (!var_12);

        /* vectorizable */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_16 = ((~(arr_2 [i_0])));
            var_17 = (min(var_17, 16314067809727184417));
            arr_6 [i_1] [1] = (arr_2 [i_1 - 3]);
            arr_7 [i_1] [i_1] = ((!((10 > (arr_4 [i_0] [i_0])))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_18 = ((+(max(var_1, (((10 ? (arr_8 [i_0] [i_0]) : (arr_9 [i_0 - 1] [9] [i_0]))))))));
            var_19 = ((~(arr_9 [12] [5] [i_0])));
            arr_10 [i_0] [i_2] = var_4;
            var_20 = (max(var_20, ((max(30, (((!((max(var_4, (arr_1 [4] [i_0 - 1]))))))))))));
        }
        var_21 = (max((max((~12444173676843419547), 12444173676843419564)), (arr_2 [i_0])));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    arr_15 [i_0] [i_0] [i_3 + 1] = var_1;
                    var_22 = (min(var_22, (arr_12 [i_4] [0])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = (((((arr_18 [i_5] [i_5]) << (((arr_18 [i_5] [i_5]) - 203))))) ? 0 : (arr_17 [i_5 - 1] [i_5]));
        var_23 = (arr_18 [i_5] [i_5]);
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        var_24 = (var_7 ? var_15 : var_2);
        arr_24 [i_6] [i_6] = (((max(206, (arr_16 [i_6 - 1] [i_6 - 1])))));
    }
    var_25 = (max(var_25, var_4));
    var_26 = (((var_0 ? ((max(var_14, 148)) : var_6))));
    #pragma endscop
}
