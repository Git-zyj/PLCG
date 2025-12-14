/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_7;
    var_15 = ((min((~4085665203138071630), ((min(var_5, 29322))))) & (((max(17010, var_12)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        arr_10 [i_3] [2] [2] [0] &= (min((arr_7 [i_0]), (~1128848850)));
                        arr_11 [i_0] [i_1] [15] [i_0] = (((((((max(17010, 106))) ? (1404831521 | var_11) : (4096 | 1024)))) ? 48526 : -43));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_16 [i_4] [i_0] [i_0] [i_0] [i_0] = ((!(((((arr_2 [1] [i_1] [i_0]) ^ var_10))))));
                            var_16 = ((max(var_0, 17415)));
                            var_17 = (min((((arr_6 [i_0] [i_0]) & (~1073610752))), ((max(79, ((var_12 ? var_1 : var_8)))))));
                            arr_17 [6] [i_1] [i_0] [i_3 - 1] [i_4] = var_7;
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_18 += (!-79);
                            var_19 -= ((!((((arr_18 [i_3] [i_3] [i_3 + 1] [4]) | (arr_18 [i_3 + 2] [i_3 + 2] [i_3 + 2] [8]))))));
                        }
                    }

                    for (int i_6 = 4; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        var_20 = (max(var_11, (((arr_12 [i_6 - 3] [i_6 - 3] [i_0] [i_0]) ? (arr_15 [i_6 - 3] [i_0] [i_6 - 3] [i_6] [i_2 + 3]) : (arr_15 [i_6 - 3] [i_0] [i_6 - 3] [i_6 - 3] [i_2 + 3])))));
                        var_21 = (arr_3 [i_0] [i_1] [14]);
                    }
                    for (int i_7 = 4; i_7 < 12;i_7 += 1) /* same iter space */
                    {
                        var_22 ^= (!562949684985856);
                        var_23 = (((arr_7 [i_0]) < (48540 || 1675428559)));
                    }
                    var_24 = ((!(arr_12 [i_0] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_25 = (((var_10 <= var_13) ? ((((((max(var_7, var_0)))) > var_3))) : var_0));
    var_26 = min(0, -1404831523);
    #pragma endscop
}
