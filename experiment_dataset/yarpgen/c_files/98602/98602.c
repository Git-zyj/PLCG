/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_2] = (arr_4 [i_2 + 3] [i_2] [i_2]);
                    var_15 -= (arr_4 [i_2 - 2] [i_2 + 4] [i_2 - 2]);
                    var_16 = (max(var_16, ((((~1590711078) ? (arr_4 [i_1] [i_1] [i_2 + 2]) : (arr_6 [i_0] [i_2 + 4] [i_0]))))));
                    arr_9 [7] [i_1] [i_2] = 0;
                }
                var_17 = (min(var_17, ((((arr_1 [i_0] [i_0]) ? (((arr_1 [11] [11]) ^ (var_11 - var_5))) : var_13)))));
                arr_10 [17] [17] = -var_6;
            }
        }
    }
    #pragma endscop
}
