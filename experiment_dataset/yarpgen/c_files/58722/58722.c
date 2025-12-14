/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((122 ^ (max(-26468, ((1726923304 ? var_12 : var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (((((((!var_10) || ((min(var_1, 1)))))) * (var_13 > 0))))));
                                arr_15 [i_4] [i_3 - 1] [i_2] [i_1] = (min((arr_4 [i_2] [i_3]), var_1));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_1 - 2] = ((!((min((1 < var_14), 12)))));
                arr_17 [i_1 - 1] = (min(26468, var_14));
            }
        }
    }
    #pragma endscop
}
