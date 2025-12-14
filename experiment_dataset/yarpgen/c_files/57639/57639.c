/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~0);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = ((~(min(var_9, (!71904934)))));

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                var_20 = (arr_1 [i_0]);
                                var_21 |= 93;
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                var_22 = -97;
                                var_23 ^= 96;
                            }
                            for (int i_6 = 0; i_6 < 13;i_6 += 1)
                            {
                                var_24 ^= var_13;
                                var_25 = (max(var_25, ((((min(8931, -87)) <= ((((!(arr_0 [1] [i_2 + 1]))))))))));
                            }
                        }
                    }
                }
                arr_18 [i_0] [i_1] = (min((((var_10 + 134) ? (((max(1, 99)))) : (3079266870 ^ 55))), (var_3 & -808799958)));
            }
        }
    }
    var_26 = 133;
    #pragma endscop
}
