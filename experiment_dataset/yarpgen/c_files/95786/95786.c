/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (!var_4);
    var_13 = (min((min(var_3, (min(var_10, var_1)))), (((~(min(var_4, var_2)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_14 = (max(var_14, (arr_8 [i_1] [i_2] [i_3])));
                        var_15 = (((~((-(arr_6 [i_0] [i_2]))))));
                        var_16 = ((min((-127 - 1), 262143)));
                        arr_9 [i_0] [i_1 - 1] [i_2] [i_3] = (arr_6 [i_1] [i_1]);
                    }
                    arr_10 [i_0] [i_1] = (arr_0 [i_1 + 1] [i_0 + 1]);
                }
            }
        }
    }
    var_17 += var_4;
    #pragma endscop
}
