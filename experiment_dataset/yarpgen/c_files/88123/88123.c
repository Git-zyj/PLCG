/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = (max(((min(var_5, var_17))), (max((min(var_15, var_9)), var_16))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_22 &= (max((min(var_3, (min(var_8, var_6)))), ((min((max(var_18, var_16)), ((max(var_11, var_17))))))));
                        var_23 *= var_13;
                    }
                }
            }
        }
        arr_11 [i_0] = (max(var_16, (min(var_15, var_4))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_24 = (min((min(var_1, (max(var_18, var_5)))), ((max(var_11, var_11)))));

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_25 = (max(var_10, (min(((max(var_14, var_9))), var_6))));
                        arr_23 [i_4] = var_2;
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_26 = (min(var_14, var_18));
                        var_27 = var_8;
                        var_28 *= (min(var_1, (max(((max(var_7, var_13))), (min(var_7, var_6))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_29 = (max(var_29, var_5));

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_30 *= var_10;
                            var_31 *= var_12;
                        }
                        var_32 = var_17;
                    }
                    arr_33 [i_0] [i_4] = (max(var_15, ((min(var_2, (max(var_0, var_9)))))));
                    arr_34 [i_5] [i_0] [i_4 - 2] [i_5] &= (min(var_11, (max(1, 766712449332498301))));
                }
            }
        }
    }
    #pragma endscop
}
