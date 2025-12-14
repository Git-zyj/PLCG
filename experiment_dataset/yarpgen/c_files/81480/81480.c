/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    var_12 = (max(var_12, var_6));
                    arr_8 [i_2] [i_2] [8] [i_0] = (((arr_5 [i_0]) ? (((!(arr_2 [14])))) : -206637096));
                    var_13 = (max((((((15404173132323862916 >> (-32890102 + 32890158))) == (var_9 != var_6)))), 4197718810));
                    arr_9 [i_2] [i_2] [i_1] [i_0] = 32890091;
                    var_14 = var_2;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_15 = ((-32890098 ? -4243299388617116919 : -32890102));
                                var_16 = (min(var_16, (((arr_3 [i_5] [i_1 + 1]) + 112))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] [i_0] = (!var_9);
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_23 [i_0] [i_6 - 1] [i_0] [i_0] [i_1] = (max(4805126027617501387, (~var_7)));
                            arr_24 [i_1] [i_0] = (!32890117);
                            arr_25 [i_0] [i_0] [i_6] [i_7 - 1] [2] = ((((arr_7 [i_1 - 1] [i_6 + 1] [i_7 - 1]) / (arr_7 [i_1 - 3] [i_6 - 1] [i_7 + 1]))));
                            arr_26 [i_1] [i_7] = ((((((497212990 ? 32890117 : 0))) ? var_4 : var_8)) >= ((-(~var_8))));
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, var_1));
    var_18 = var_0;
    var_19 = -32890115;
    #pragma endscop
}
