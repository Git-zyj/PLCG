/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_6 ? ((4977500541815080080 ? -122 : var_2)) : ((min(1, 34825))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_19 &= (((arr_1 [i_3]) ? (max(-1, (arr_6 [i_2 + 1] [i_2 + 1] [i_3 + 2] [i_3 - 1]))) : ((max((arr_6 [i_0] [i_3 + 2] [i_3 + 2] [i_3 + 2]), (arr_6 [i_3] [i_3 - 1] [i_3] [i_3 - 1]))))));
                            arr_9 [i_2] = ((!((max((arr_8 [i_0] [i_0] [i_2 + 1]), 1366007764)))));
                            arr_10 [i_0] [i_0] [i_0] = (min((arr_6 [i_2] [i_2 - 1] [i_2] [i_2]), (max(var_4, (min(1, 63192))))));
                        }
                    }
                }
                var_20 = ((((((arr_2 [i_1] [i_1]) ? 1 : 1))) - (max((arr_4 [i_0] [i_1]), (arr_2 [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
