/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (min((((-(var_10 && var_11)))), (~-3845592903127554234)));
    var_13 = ((-(~var_9)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_3] &= (min(11447, (((arr_4 [i_0]) ? -110 : 2147483637))));
                        arr_11 [i_2] [i_1] [i_2] [i_3] [i_2] [i_3] = (((((((arr_9 [i_0] [i_2] [i_3] [i_3] [i_1]) ? var_11 : 11447)) & (((arr_8 [i_0] [i_1] [i_0] [i_3]) ? (arr_5 [i_0] [i_1] [i_2]) : 768475872)))) / 253));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        var_14 = (~-58);
                        arr_14 [i_4] [i_1] [i_2] &= var_1;
                    }
                    arr_15 [i_2] [3] [3] = ((var_11 ? var_1 : var_1));
                    var_15 = ((!(((-(min(var_2, (arr_0 [i_0]))))))));
                    var_16 += (((var_10 ? (arr_7 [i_0] [i_1] [i_2]) : (arr_8 [i_0] [i_1] [i_1] [i_0]))));
                    arr_16 [i_2] [i_2] [i_2] = (((arr_0 [i_0]) & ((~(~var_4)))));
                }
            }
        }
    }
    #pragma endscop
}
