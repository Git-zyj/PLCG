/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((min((max(var_17, var_9), var_8)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = (min((((arr_5 [i_0]) + 164)), ((max((arr_5 [i_1]), 0)))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_20 = 594762088;
                            var_21 = (max(var_21, ((min((((8 && (arr_0 [i_1] [i_2])))), (((~var_9) ? var_3 : (arr_9 [i_0] [i_1] [i_0] [12] [i_4]))))))));
                        }
                        var_22 = ((-((min(-1, (arr_3 [i_0]))))));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = var_14;
        var_23 = (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    var_24 = (var_16 - var_10);
    #pragma endscop
}
