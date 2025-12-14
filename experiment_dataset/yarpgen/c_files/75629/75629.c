/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = 255;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_13 = min(32615, -1338637368);
                            var_14 = (max(var_14, ((max((max(32596, -221792807)), -1338637368)))));
                            arr_11 [i_0] [i_1] [i_2 + 1] [7] [i_2 + 1] [i_3] = -221792806;
                            var_15 = (min(var_15, (arr_9 [i_2])));
                            var_16 = (max(var_12, ((max(var_3, (max(var_7, var_1)))))));
                        }
                    }
                }
                var_17 = arr_0 [i_0];
            }
        }
    }
    var_18 = (max(var_18, var_6));
    #pragma endscop
}
