/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = 12682014314250992553;
        var_14 = ((~(((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_7))));
        arr_3 [i_0] = (arr_0 [i_0]);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_15 = (min(var_15, var_4));
                            var_16 = (min(var_16, (((237 ? 60207 : 1524133142837309507)))));
                            arr_16 [i_1] [i_2] [i_3] [i_1] = (((var_4 - (((var_6 ? (arr_13 [2] [i_3] [16] [i_3] [i_4]) : (arr_13 [i_1] [i_3] [i_1] [i_1] [i_4])))))) != (((~var_2) & (arr_6 [i_3]))));
                            var_17 = ((1 ? (max((var_10 | -572), (21 <= var_7))) : (arr_4 [i_1])));
                        }
                    }
                }
                var_18 = ((-(arr_15 [12] [i_1] [i_1] [i_1])));
                arr_17 [i_1] = ((max(-110, (((arr_10 [i_1]) << 1)))));
            }
        }
    }
    var_19 = var_2;
    #pragma endscop
}
