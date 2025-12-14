/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((10026 ? var_2 : -1267449874))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = var_9;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_13 = (((arr_9 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2]) - (arr_9 [i_2] [i_2] [i_2 + 1] [i_2] [i_2])));
                        arr_12 [i_3] [i_1] [i_1] [i_1] = var_5;

                        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            var_14 = ((3027517421 ? (arr_7 [i_2] [i_2 - 1] [i_2 - 1]) : 3027517421));
                            arr_15 [i_3] [i_3] [i_2] [i_3] [i_4] = (!var_7);
                            arr_16 [i_1] [i_2] [i_3] [i_4] = 11736;
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_15 = -102;
                            arr_19 [i_0] = 1267449874;
                            var_16 *= var_8;
                        }
                        var_17 = (((((arr_17 [i_3] [i_1] [i_2]) || 6107)) ? 239 : (((arr_6 [i_0] [i_2] [i_3]) ? -103 : (arr_0 [i_1])))));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_18 = (1267449884 ^ 1);
        arr_22 [i_6] &= (((max(3027517430, var_8)) >= ((((!(arr_7 [i_6] [i_6] [i_6])))))));
    }
    var_19 = (var_3 / 6);
    #pragma endscop
}
