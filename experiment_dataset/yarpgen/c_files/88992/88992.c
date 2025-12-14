/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [3] [6] [i_2] [i_2] = 56976;
                    var_20 = (((((min(225, var_7)) * -var_5))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_9 [i_2] |= (max((0 - 32159), (-32159 * 2111255450)));
                        arr_10 [i_0] [i_3] [13] [i_3] = ((((((arr_1 [i_3]) - (arr_1 [i_1])))) ? -var_19 : ((var_15 ? -32159 : (arr_1 [i_2])))));
                    }
                }
            }
        }
    }
    var_21 = (max((-604 - 15360), var_10));
    #pragma endscop
}
