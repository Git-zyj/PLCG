/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = (arr_5 [i_2]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_14 = 1152975567;
                        var_15 = (min(var_15, var_9));
                        var_16 = ((-1556726463 ? (!var_12) : (arr_11 [i_0] [i_1] [7] [i_3])));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_17 = -1556726458;
                            arr_15 [i_3] [i_1] [i_2] [i_1] [13] = (((((var_3 ? var_12 : (arr_7 [i_1] [i_1])))) ? 78 : (arr_0 [i_3])));
                            var_18 = (min(var_18, (arr_1 [i_2])));
                            var_19 ^= ((var_10 ? 127 : (arr_13 [i_0] [i_1] [i_2] [i_3] [14])));
                        }
                    }
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        var_20 = (((((min((arr_11 [i_5] [i_0] [i_0] [i_0]), -1588181598)) + 2147483647)) << ((((8840477791039917489 ^ ((68 ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1]))))) - 1269435824))));
                        var_21 = (max((((~(~var_9)))), ((~(((arr_7 [i_1] [i_1]) & var_8))))));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_22 = (max(((((-8840477791039917490 ? 8840477791039917489 : 255)) / ((32760 ? 8840477791039917490 : 1374431738096085683)))), (((((min(257909071, (arr_1 [i_2])))) ? (1656546617 != 118434603711439773) : (~var_1))))));
                        arr_20 [i_0] [i_1] [i_1] [i_2] [i_0] [i_6] = (!-8840477791039917502);
                        arr_21 [i_1] [i_1] [i_1] = ((-(max((~-1556726484), (min(8, (arr_5 [i_0])))))));
                        var_23 = (max(var_23, (((var_1 && (((~((1 ? 8840477791039917502 : 42054))))))))));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        arr_26 [i_0] [i_1] [i_2] [i_7] = (min(1, ((~(arr_11 [i_0] [i_1] [0] [i_7])))));
                        var_24 = (max(var_24, (((-(((175 >= (arr_3 [7] [7])))))))));
                    }
                }
            }
        }
    }
    var_25 = (((((-((var_12 ? 6523900426768199006 : var_10))))) && (3615484306967876412 && var_11)));
    #pragma endscop
}
