/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min(((var_12 ? var_7 : var_0)), var_10)) ^ var_11));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_14 ^= var_12;
        arr_3 [i_0] |= (min((((((65535 ? var_2 : (arr_1 [13])))) ? var_9 : ((var_2 ? var_8 : 38)))), (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 += var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [1] [6] [i_0] [0] [i_0] = var_11;
                                var_16 = ((-(!var_9)));
                                var_17 |= var_0;
                                var_18 = (((!-var_0) ? (min((arr_12 [i_2 + 1] [i_0] [i_0 - 1]), var_3)) : -403688474));
                                var_19 = (min(-var_3, (~var_11)));
                            }
                        }
                    }
                    var_20 = ((var_6 ? 550085072273761292 : ((403688473 ? 403688483 : 17896659001435790307))));
                }
            }
        }
    }
    #pragma endscop
}
