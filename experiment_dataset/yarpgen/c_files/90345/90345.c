/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 = (((((((-30555 ? (arr_6 [i_1]) : 4067956770))) + (min(-6439377387938040579, var_2)))) + (((-6439377387938040579 ? var_12 : (arr_11 [i_0] [i_1 + 1]))))));
                            var_15 = (max(var_15, var_3));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_16 = ((~(((max(1, 0)) ? (var_7 < var_7) : ((((arr_7 [i_0 - 1] [i_1] [i_4]) >= var_6)))))));
                                var_17 = var_9;
                                arr_15 [i_0 + 2] [i_1] = (((arr_12 [i_2] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]) + (((!((((arr_13 [i_0]) ? (arr_3 [i_1]) : -16919))))))));
                            }
                            for (int i_5 = 1; i_5 < 15;i_5 += 1)
                            {
                                arr_19 [1] [i_3 - 1] [i_2] [i_2] [i_1 + 1] [1] |= (arr_6 [6]);
                                var_18 = (arr_13 [i_1 + 1]);
                                arr_20 [i_1] = ((65521 ? (~1) : ((max(0, 1)))));
                                arr_21 [i_0 + 2] [i_1] [i_5 - 1] [i_3] [i_2] = (((var_12 < var_5) + ((+(min((arr_17 [i_5] [i_3] [i_3 - 1] [i_3] [i_5]), (arr_4 [i_5])))))));
                            }
                            var_19 += var_2;
                        }
                    }
                }
                var_20 += (!var_12);
            }
        }
    }
    var_21 = (var_1 == var_12);
    #pragma endscop
}
