/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((352649484523651582 ? ((771039463121677554 * (((210 >> (15547 - 15526)))))) : ((((((min(-32185, 1))) <= var_8))))));
    var_15 = ((1 == ((min(((min(1, 1))), var_0)))));
    var_16 = (((max(var_13, var_1))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] [i_2 + 1] = ((~(((arr_3 [i_0 - 1]) ? var_2 : 161))));
                    var_17 = (min(var_17, (((((((~(arr_8 [i_1] [i_2 - 1] [i_2 - 1] [i_1]))) + 2147483647)) >> ((max((arr_5 [i_2 + 2]), (arr_5 [i_2 - 1])))))))));
                    arr_11 [i_2] [i_2] [i_2 + 1] = (min((max(var_4, ((var_9 ? var_4 : var_11)))), (~32185)));
                    var_18 = ((-((((var_10 ? var_6 : var_3)) - var_3))));
                }
            }
        }
    }
    #pragma endscop
}
