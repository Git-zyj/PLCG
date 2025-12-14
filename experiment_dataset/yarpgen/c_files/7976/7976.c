/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (min((((arr_3 [3] [i_0 + 3]) & var_5)), ((var_1 ? (!-1179366885401329652) : var_5))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, (((~(((arr_11 [i_4 + 2] [7] [3] [i_0 + 2] [i_0 - 1]) ? (arr_9 [i_0 + 1] [0] [i_2] [i_3 + 1]) : (arr_7 [6] [i_1] [6] [1]))))))));
                                var_14 = (((((-1179366885401329652 ? ((2630936273290157398 + (arr_8 [i_0 - 4] [i_1] [i_2]))) : ((min(1, -648770180)))))) ? (!var_9) : (min(251687067265823309, 32741))));
                                var_15 ^= (max((arr_10 [8]), var_4));
                                var_16 = arr_8 [7] [i_1] [i_0 + 2];
                            }
                        }
                    }
                }
                arr_12 [i_0 - 4] = ((~(~0)));
                var_17 -= (((167 & 88) ^ (~var_8)));
            }
        }
    }
    var_18 ^= ((~(max(1179366885401329651, (1066444432 ^ -8622974152308237097)))));
    #pragma endscop
}
