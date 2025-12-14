/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = ((-(((((var_12 ? var_13 : 1))) ? ((1 ? 1 : 1)) : ((1 ? 1 : 1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_16 = (((arr_0 [i_1 - 1] [i_1]) ? (arr_0 [i_0] [i_1]) : 1));
                        var_17 = (min(var_17, (arr_6 [i_1 + 1])));
                        var_18 = (min(var_18, (arr_4 [8] [8] [i_0] [i_3])));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [8] = 1;
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] = (((arr_0 [1] [i_1 + 2]) ? (arr_4 [i_0] [i_1 - 1] [i_2] [i_1]) : (arr_0 [i_1] [i_1 + 1])));
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            var_19 = (~1);
                            var_20 = ((var_10 ? (((arr_16 [i_0] [i_1] [1] [i_3] [i_3] [i_1] [i_5]) ? (arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] [i_1 + 1] [i_5]) : (arr_2 [13] [i_1] [i_1]))) : ((-(arr_11 [i_1])))));
                        }
                    }
                    var_21 = 1;
                }
            }
        }
    }
    var_22 = ((var_3 ? 1 : ((min(1, 1)))));
    var_23 = var_8;
    #pragma endscop
}
