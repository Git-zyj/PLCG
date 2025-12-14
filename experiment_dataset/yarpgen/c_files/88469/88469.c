/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((max((var_3 * var_5), (var_9 < var_0))), var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max((var_7 != var_7), (max(var_1, var_1))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [1] [i_3] [i_4] [i_1] [i_4 - 1] = (((((!((((arr_10 [i_2] [i_1] [i_1] [i_3] [i_2] [i_3] [i_2]) >> (var_2 - 24913))))))) < ((max((!var_8), var_0)))));
                                arr_13 [i_2] [i_1] [i_2 - 3] [i_2] [i_4] = (!var_0);
                            }
                        }
                    }
                }
                var_11 = (min(var_11, ((min((arr_7 [i_1] [i_1] [i_0] [i_0]), (max(8599262119049410486, 1)))))));
                arr_14 [i_0] [10] = min(var_4, (max((arr_0 [i_1] [i_0]), var_2)));
            }
        }
    }
    var_12 = var_9;
    var_13 = var_3;
    #pragma endscop
}
