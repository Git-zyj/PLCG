/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (max((min(var_10, var_11)), var_3));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_13 = (max(-var_10, -var_3));
                            arr_12 [i_0] [i_0] [i_2] [i_2] [i_2] = (max(-var_9, (!var_9)));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_14 = var_11;
                            arr_15 [i_0] [i_0] [i_2] [i_3 - 1] [i_5] = (~-var_10);
                            var_15 = (min(var_9, var_4));
                            arr_16 [i_0] = (((-(max(var_10, var_11)))));
                        }
                        var_16 = (max(var_16, (!var_12)));
                        var_17 ^= ((-(~var_2)));
                    }
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_18 = ((~((-(!var_7)))));
        arr_19 [i_6] [i_6] = var_2;
        var_19 = var_5;

        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {
            var_20 = (max(var_20, (min((~var_1), ((-(min(var_10, var_4))))))));
            arr_24 [i_6] [i_6] = var_6;
        }
    }
    var_21 = ((((max(var_4, var_6)))));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            {
                arr_30 [i_8] [i_8] = (min((~var_1), var_12));
                var_22 = (min((!var_11), var_4));
            }
        }
    }
    var_23 = (((max(var_11, var_2))));
    #pragma endscop
}
