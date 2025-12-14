/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] [19] [i_0] [19] = (((arr_2 [i_0]) < (min(-142719456623907653, 2047))));
                            var_20 = (max((arr_3 [i_0 + 1]), var_0));
                            var_21 = 1681551052;
                            var_22 = (min(var_22, ((max((arr_1 [i_0 - 1]), 734844260)))));
                            var_23 = 58;
                        }
                        for (int i_5 = 3; i_5 < 19;i_5 += 1)
                        {
                            var_24 = (max(var_24, -69));
                            var_25 = (((18446744073709551612 & 0) ? ((((arr_12 [i_2 - 2] [i_3 - 3] [i_3] [i_3] [i_5 - 3]) ? (arr_15 [i_2 - 3] [i_0] [i_5] [i_5] [i_5 - 1]) : (arr_12 [i_2 - 1] [i_3 + 3] [i_2 - 1] [i_2 - 1] [i_5 + 1])))) : 0));
                        }
                        var_26 = (((22850 ? -1 : 0)));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_27 = (arr_12 [i_0] [i_2] [i_6 - 1] [i_6 - 1] [i_6]);
                                var_28 = (0 && 0);
                                var_29 = (!var_14);
                                arr_23 [i_0] [i_1] [i_0] [i_6 + 2] [i_1] = 30720;
                            }
                        }
                    }
                    var_30 = var_16;
                    arr_24 [i_0] [i_0] [i_1] [i_1] = (arr_21 [i_0] [i_1]);
                }
            }
        }
    }
    var_31 = var_18;
    #pragma endscop
}
