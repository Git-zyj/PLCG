/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, -45));
                    arr_9 [i_0] [i_0] [i_2] = (max(((0 | (-45 < var_8))), (var_10 + -1024738015)));
                    var_21 = (max(var_21, (((1171673377 || var_18) >= 1171673377))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        arr_12 [0] = (10563 < 3578681800179960611);
        arr_13 [i_3] = ((-(((~var_9) ? (25725 ^ 262144) : (!32753)))));
        var_22 = (!-56);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    var_23 = -1311700052;
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_24 = (max(var_24, var_1));
                                var_25 = (max(var_25, 50717));
                                var_26 = var_18;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 15;i_10 += 1)
            {
                {
                    var_27 = ((var_7 ? 241 : var_10));
                    arr_33 [i_4] [i_9] [1] = (-6 ? 4294967295 : (var_13 - 1127633247970772654));
                }
            }
        }
        var_28 = ((!(1171673377 || var_1)));
    }
    var_29 = var_6;
    var_30 = 127;
    #pragma endscop
}
