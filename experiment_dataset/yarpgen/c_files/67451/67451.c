/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_6;
    var_21 = var_5;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_22 &= (((arr_1 [i_0]) ? (min(var_3, (arr_0 [8]))) : (arr_0 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_3] = (-127 - 1);
                        var_23 = ((((arr_4 [i_1] [i_1 - 2] [i_1 - 2]) + (arr_8 [i_1]))) + (arr_8 [i_1]));
                    }
                }
            }
        }
        var_24 = (((max(874049241, (arr_2 [i_0] [i_0]))) != ((((arr_6 [i_0] [i_0]) % (((!(arr_2 [i_0] [i_0])))))))));
        arr_13 [6] = 874049241;
    }
    var_25 = var_9;
    var_26 = ((var_14 ? var_19 : ((var_5 ? -var_5 : var_10))));
    #pragma endscop
}
