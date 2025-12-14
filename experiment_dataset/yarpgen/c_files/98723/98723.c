/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_6 >> (var_5 + 1397383420)))) - ((-((20 ? var_4 : -28909))))));
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (min(((min(13179788432746468378, ((((arr_0 [i_0] [i_0]) < var_8)))))), (min(2997042163, var_7))));
                var_14 = (min(var_14, ((((((arr_1 [i_1]) - (arr_5 [i_0] [i_1]))) - ((-1387432693 - (arr_3 [i_1] [i_0]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = ((min((arr_7 [i_4] [i_3] [i_2] [i_0]), (arr_4 [i_1] [i_2] [i_1]))));
                                arr_12 [i_2] [i_2] = (min((arr_9 [0] [i_2] [i_4]), ((-(((arr_6 [i_0] [15]) * (arr_8 [i_2] [i_3] [i_2] [i_2])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
