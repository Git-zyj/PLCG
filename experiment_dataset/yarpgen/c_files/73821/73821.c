/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((-127 - 1) % (max(var_13, 992))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_3] = (((arr_13 [i_4] [i_4] [i_2] [i_3] [i_4]) ? (arr_4 [i_4]) : (arr_1 [i_0])));
                                var_19 = (min(var_19, (~var_3)));
                            }
                        }
                    }
                    arr_17 [i_2] [9] [11] [4] = 6823;
                }
            }
        }
    }
    var_20 = ((22 - (((!(((var_7 ? var_8 : var_8))))))));
    var_21 ^= (((((((var_2 ? var_12 : var_5)) - var_16))) ? var_2 : (!-1170)));
    #pragma endscop
}
