/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -6603063451563403088;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = arr_5 [i_1 + 3] [i_0 - 1];
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = var_17;
                                arr_13 [i_0] [i_4] [i_4] = (arr_0 [1] [i_1 - 1]);
                            }
                        }
                    }
                }
                var_21 = (min(-907879925, 1048560));
                arr_14 [i_0] [1] [i_0 + 1] |= (arr_10 [i_0] [i_1] [i_1] [i_1 + 1]);
            }
        }
    }
    #pragma endscop
}
