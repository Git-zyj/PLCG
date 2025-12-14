/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 += (-(min(-58568, ((-(arr_5 [i_0 + 1] [10] [10] [i_0 + 1]))))));
                    var_18 *= (min((((((~(arr_1 [16]))) != (arr_3 [0])))), (((58568 ? 6966 : 58568)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((min(((min(58566, (arr_11 [i_0] [i_1 - 3] [i_4 - 3] [i_4] [i_4] [i_0])))), (((arr_11 [i_1] [i_1] [i_4 - 2] [i_4] [i_4 - 2] [i_4]) ? 58568 : 58572)))))));
                                var_20 = ((~(((arr_10 [11] [11] [i_0] [11] [i_4] [11]) & (arr_10 [i_2 - 1] [12] [i_0] [16] [i_1 + 1] [i_1 + 1])))));
                                var_21 = (max(-6969, ((58561 ? -var_12 : -6967))));
                                var_22 ^= var_16;
                            }
                        }
                    }
                    var_23 = (min(var_23, (((((min(((max(6996, 6996))), 6996))) ? 7007 : (max((arr_7 [i_0 - 2] [i_1 - 1] [i_2 - 1] [i_2]), var_13)))))));
                    var_24 = (max(var_24, var_9));
                }
            }
        }
    }
    var_25 = var_7;
    #pragma endscop
}
