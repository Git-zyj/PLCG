/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 |= min((arr_1 [i_0]), var_3);

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_18 = (max(var_18, var_7));
                    arr_7 [7] [i_1] [i_0] = 2113929216;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_19 = (arr_6 [i_0] [i_1] [i_1]);
                                var_20 ^= ((max((arr_0 [i_2]), var_15)));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_21 &= 52035;
                    arr_15 [i_0] [i_1] [i_0] [i_5] = ((1 ? (arr_12 [2] [i_0 + 1] [i_5] [i_5]) : (arr_1 [i_1])));
                }
                arr_16 [i_0] = var_0;
            }
        }
    }
    var_22 -= var_12;
    var_23 = 1959723208;

    for (int i_6 = 4; i_6 < 16;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                {
                    var_24 = 9223372036854775807;
                    var_25 = var_14;
                }
            }
        }
        arr_25 [i_6] [i_6] = var_10;
    }
    #pragma endscop
}
