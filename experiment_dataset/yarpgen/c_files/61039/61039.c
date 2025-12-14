/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = 5704408801657910474;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1 + 2] &= ((arr_1 [i_0] [i_1 + 3]) && 18446744073709551602);
                var_15 = (((arr_4 [i_0]) || ((!(5881673089200144806 && var_9)))));
                arr_6 [i_0] = 18446744073709551602;
                arr_7 [i_0] [i_0 + 1] [i_1 + 3] = ((~(arr_2 [i_0 - 1] [i_1 + 3])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_16 [8] [8] [i_4] = (-9223372036854775807 - 1);
                    var_16 = (((((~(arr_3 [i_2] [i_2])))) < (arr_1 [i_3] [i_3])));
                    var_17 = (100 ^ (arr_3 [i_4] [i_2]));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_18 = 1;
                        var_19 = (!18446744073709551615);
                        arr_20 [i_4] [4] [i_4] [i_5] = ((-75 ? var_11 : var_3));
                    }
                }
            }
        }
    }
    #pragma endscop
}
