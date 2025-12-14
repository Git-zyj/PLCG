/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((((min(((min(1, var_14))), (arr_0 [i_0])))) ? (((arr_0 [i_0]) ? -2726789051392368588 : (arr_1 [i_0]))) : ((((((((arr_1 [i_0]) ? var_9 : 9007199254740990))) && (!var_0)))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_8 [7] [i_2] [i_0] [i_0] [i_0] [i_0] = (~(min((arr_3 [i_1 - 1] [i_0]), (arr_0 [i_0]))));
                        var_18 *= (min((!var_13), (max((arr_6 [i_3] [i_3] [i_2] [i_0] [i_0]), (arr_6 [i_3 - 2] [i_2] [i_1] [i_1 + 1] [i_0])))));
                    }
                }
            }
        }
        arr_9 [i_0] = ((-2726789051392368588 ^ (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    var_19 = (2726789051392368587 > var_5);
    #pragma endscop
}
