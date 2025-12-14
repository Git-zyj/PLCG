/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_4 ? 127 : 0))) ? ((((~var_9) ? var_2 : ((var_5 ? var_9 : var_8))))) : (110 * 287667426198290432)));
    var_12 = ((var_3 ? -57210 : var_6));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0 + 1] = (max(((((arr_1 [i_0 - 2] [i_0 - 1]) ? -27 : (arr_0 [i_0 + 2])))), (((arr_1 [i_0 + 2] [i_0 - 2]) ? (arr_4 [i_0 + 2] [i_0 - 2]) : var_1))));
                var_13 = -26923;

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_0] [i_2] [i_2] [i_1] = (min((arr_2 [i_2] [i_2]), ((15916690804694072121 ? var_4 : 110))));

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_14 = (max(var_14, ((((((50114 ^ 20788) | (arr_2 [i_3] [i_1]))) & ((~(arr_9 [i_2] [i_2] [i_2] [i_2 - 1] [i_0]))))))));
                        arr_12 [i_2] [16] [i_2] [i_1] [i_2] = (min(0, (((!(arr_0 [i_0 - 1]))))));
                        arr_13 [i_2] [i_2] = 18159076647511261184;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_18 [i_0] [i_2] = (arr_6 [i_2] [i_0]);
                        arr_19 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] = 7877747802296031283;
                        var_15 = (min(var_15, ((((arr_0 [i_0]) ? (arr_1 [i_2 - 1] [i_0 - 1]) : ((~(arr_4 [i_2] [i_2]))))))));
                        arr_20 [i_0] [i_2] = 64;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_16 *= (0 / var_1);
                        var_17 = ((!(arr_1 [i_2 - 1] [i_0 - 1])));
                    }
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        var_18 = ((((~1933283461410421347) ? (!var_6) : (((arr_23 [i_2] [i_2]) ? (arr_24 [i_6] [i_2] [i_1] [i_0]) : 7963)))));
                        arr_25 [3] [i_2] [i_2] [i_0] = (min(((((max(var_9, (-9223372036854775807 - 1))) < (arr_15 [i_0 - 1] [i_1] [i_2 - 1] [i_6 + 1])))), (max((0 << var_8), (((arr_11 [0] [0] [i_2] [1] [i_6] [i_6]) + 1933283461410421343))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
