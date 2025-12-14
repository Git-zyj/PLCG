/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -903443439;
    var_14 = (((var_2 >= var_1) ^ (var_7 + var_1)));
    var_15 = max((min(var_0, (max(var_3, var_4)))), (var_8 / -903443439));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_16 = arr_0 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 += (max((min((((arr_4 [1] [15]) ? 250 : (arr_6 [i_1] [i_1]))), ((((arr_4 [i_0] [20]) <= 1727189979))))), (arr_4 [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (!18446744073709551615);
                                var_19 *= var_9;
                                var_20 = (max(var_20, 18446744073709551615));
                                var_21 |= (arr_8 [i_0 - 1] [i_2] [i_4]);
                            }
                        }
                    }
                    var_22 = (min(var_22, var_12));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_23 = (arr_18 [i_0] [i_1] [20] [i_5] [i_6]);
                                var_24 = (max(var_24, var_8));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
