/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 129;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 += (min(((((~1) ? ((~(arr_2 [i_1] [i_1]))) : (arr_7 [8] [i_1] [i_2] [i_3])))), (max(var_3, (max((arr_9 [i_3] [i_0]), (arr_0 [i_3])))))));
                                var_19 = ((~(arr_3 [i_3])));
                            }
                        }
                    }
                }
                var_20 &= ((((((arr_3 [i_0]) ^ var_10))) ? (min((arr_0 [i_1]), (((~(arr_4 [i_0] [i_1] [i_1])))))) : var_4));
            }
        }
    }
    var_21 = (min(var_21, var_0));
    #pragma endscop
}
