/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_4 & (min(var_10, var_15))));
    var_19 = (((((((max(32747, 24519))) < (var_5 <= var_8)))) * var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (min(((20243 ? 45312 : -2147483622)), -28672));
                var_21 *= ((-(((max(var_6, var_0))))));
                arr_8 [i_0] [i_1] = (min((((((var_9 >= (arr_7 [i_1] [i_0]))) ? ((min(var_3, (arr_3 [12] [i_1])))) : (arr_2 [i_0])))), (min(((((arr_6 [5] [i_1] [2]) <= var_1))), (max(var_17, var_3))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_22 = ((arr_6 [1] [i_0] [1]) << (((min(var_6, -var_9)) + 6086)));
                                var_23 = (arr_3 [6] [i_4]);
                                arr_15 [i_0] [i_1 + 2] [i_2] [i_2] [6] [i_3] [11] = ((-(arr_14 [1] [1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
