/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((1 ? -32184 : 32767));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_21 = (((-(arr_0 [i_0 + 1]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_10 [i_0 - 1] [i_0 - 1] [i_1] [i_3] = 0;
                        var_22 = var_2;
                    }
                    arr_11 [i_1] [i_1] [i_1] = 32183;
                    arr_12 [i_1] = var_9;
                }
            }
        }
        var_23 += (max((arr_4 [i_0 - 1] [6]), (((arr_9 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1]) < (arr_4 [i_0 - 1] [1])))));
    }
    var_24 *= ((var_7 || (((((max(var_18, 32767))) - (var_4 < var_4))))));
    var_25 = (min(((max(32757, 32))), (min(-var_19, 134152192))));
    #pragma endscop
}
