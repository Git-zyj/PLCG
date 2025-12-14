/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_12 = (min(var_12, (!var_1)));
        var_13 &= (((min((min(var_11, var_1)), var_9)) == var_2));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_14 = var_6;
                    var_15 = var_3;
                    arr_11 [i_1] [i_1] = var_7;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                {

                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        var_16 = var_9;
                        var_17 = (max(var_17, var_8));
                        var_18 = -var_5;
                    }
                    for (int i_7 = 3; i_7 < 20;i_7 += 1)
                    {
                        arr_23 [i_1] [i_1] [i_1] [i_5] = var_0;

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_19 = (var_5 || var_7);
                            var_20 = var_6;
                        }
                        var_21 = var_3;
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_22 = var_7;
                                var_23 = var_5;
                                var_24 = (min(var_24, (var_5 != var_2)));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_11 = 1; i_11 < 15;i_11 += 1)
    {
        var_25 = var_8;
        var_26 = var_3;
        var_27 = (max(var_27, ((min(var_7, (~var_1))))));
        var_28 = (((var_1 + (min(var_1, var_7)))));
        var_29 = (var_10 || var_11);
    }
    var_30 = var_1;
    #pragma endscop
}
