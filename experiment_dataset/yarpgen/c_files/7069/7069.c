/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 65535;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] = ((((!(arr_4 [i_0] [i_1] [i_3] [i_4]))) ? (((arr_4 [i_0] [22] [i_2] [i_3]) ? var_0 : -15540)) : ((min((arr_4 [i_3] [23] [i_4 + 2] [i_3]), (arr_4 [i_4] [i_3] [i_0] [i_0]))))));
                                arr_14 [i_2] [i_4] [i_2] [17] [i_4] [i_1] = var_8;
                            }
                        }
                    }
                }
                var_12 = (max(var_12, (((~(!49910))))));
            }
        }
    }
    var_13 = var_10;
    #pragma endscop
}
