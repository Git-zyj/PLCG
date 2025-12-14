/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_15 = ((~((var_7 ? var_13 : ((min(var_14, -856460251)))))));
                            var_16 *= (max((((var_10 ? 0 : var_9))), ((64 ? (arr_9 [i_0] [2] [i_0] [i_0 + 1] [i_0 - 1]) : (arr_9 [i_0 + 1] [8] [i_0] [i_0 - 1] [i_0 + 1])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_17 = (((arr_0 [i_0 - 1] [i_0 - 1]) > ((max((arr_0 [i_0 - 1] [i_0 - 1]), (arr_0 [i_0 - 1] [i_0 - 1]))))));
                            var_18 = (max(var_18, ((((((min(var_7, 1)))) ? (((min(-32767, (arr_2 [i_5] [i_5]))))) : ((~(~var_11))))))));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_12;
    #pragma endscop
}
