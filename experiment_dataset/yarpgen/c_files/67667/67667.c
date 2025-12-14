/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = -113;
                    var_16 ^= (max((min((arr_3 [i_0]), (arr_3 [i_0]))), (max((arr_3 [i_0]), var_11))));
                }
            }
        }
    }
    var_17 = (max(var_17, (!var_12)));
    var_18 = ((((max(49, (65535 < 0)))) > var_4));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    var_19 = (min(var_19, (arr_11 [i_3])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_20 = (!var_12);
                                arr_21 [i_4] [8] [i_4] [8] [i_7] [3] = (arr_18 [10] [i_4] [i_4] [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
