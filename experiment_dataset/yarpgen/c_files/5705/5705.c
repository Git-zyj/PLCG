/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_2 ? -var_1 : var_0)) > ((max(var_8, var_17)))));
    var_20 = max(((((max(var_11, 18133875003563628645))) ? ((var_1 ? var_6 : var_6)) : 312869070145922970)), var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = ((!(arr_4 [i_2])));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_21 = var_16;
                        var_22 = (max(var_22, (arr_9 [i_1] [i_1])));
                    }

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_23 = (((arr_13 [2]) ? 312869070145922970 : 182));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = (((34502 ? (arr_13 [i_0]) : 246)));
                        }
                        var_24 = (arr_4 [i_4]);
                        var_25 = (((17205 / (arr_3 [i_1] [i_1] [i_0]))));
                        arr_16 [i_4] [i_2] [i_1] [i_0] = (!312869070145922970);
                    }
                    for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] [12] [i_0] = 1428420033;

                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_26 = (((((((arr_0 [i_0]) + 2147483647)) << (var_8 - 1176)))));
                            arr_22 [i_0] [i_6 + 4] [i_6] [i_0] [i_0] [i_0] = ((~(arr_1 [i_6 + 2])));
                            var_27 *= (((arr_2 [i_0] [i_6 + 4] [i_2]) != (arr_21 [i_7] [i_1])));
                            arr_23 [i_7] [2] [i_2] [i_1] [i_0] = (((max((max(var_6, (arr_14 [i_0] [i_6 + 1]))), (arr_14 [i_1] [i_1])))) ? (((((min(var_15, (arr_7 [i_7] [i_6] [i_0] [14] [i_0])))) ? 225 : var_11))) : (min((max(18133875003563628656, var_12)), ((((-2147483616 + 2147483647) >> 1))))));
                        }
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_28 -= var_3;
                        var_29 = (!207);
                        arr_26 [15] [i_2] [i_1] = max((((max((arr_11 [i_8] [i_2] [i_1]), (-127 - 1))) / ((((arr_11 [i_0] [7] [i_0]) ? var_7 : 3))))), var_0);
                        var_30 = 246;
                    }
                    var_31 = (((-38 ? ((var_4 ? (arr_25 [i_2] [i_2] [i_1] [i_1] [i_0] [i_0]) : (arr_1 [i_0]))) : (min((arr_12 [i_1] [i_2] [i_2] [i_1] [i_1]), (arr_18 [3]))))));
                }
            }
        }
    }
    var_32 = (max((10 | 31), (max(var_7, (min(var_14, var_17))))));
    #pragma endscop
}
