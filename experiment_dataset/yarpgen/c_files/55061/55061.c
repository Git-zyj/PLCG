/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_15, (min(var_12, 0))));
    var_19 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (+-63);
                arr_6 [i_0] [i_0] = (min((((((-64 % (arr_4 [i_1]))) + (arr_4 [i_1])))), ((-64 & ((-64 ? 7832445155807537029 : 439364811))))));
                arr_7 [i_0] = min((max((arr_3 [i_0] [i_0] [i_1]), 89486480)), var_2);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_2] [i_0] [i_2] |= (arr_11 [i_0] [i_1] [i_1] [i_2]);
                            var_20 = (var_6 / var_11);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
