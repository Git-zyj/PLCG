/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((max(1, var_6))) ? (!9) : var_0))) ? 32107 : var_5));
    var_13 = 65535;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = (((max(((min(var_7, var_4)), 11)))));
                    arr_11 [i_2] [i_1] [i_2] [i_2] = ((((max((arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1]), 77))) + 5019));
                    var_15 = ((-((32107 + ((var_6 ? 29 : var_4))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_16 ^= (arr_18 [i_0] [i_3] [i_4] [i_5]);
                        var_17 ^= ((max(33018, (min(var_1, 0)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
