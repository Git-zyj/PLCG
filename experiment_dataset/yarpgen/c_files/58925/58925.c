/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = (min(var_13, 1));
    var_17 = (min(var_17, (((-var_3 >= ((((var_13 ? var_13 : -1)))))))));
    var_18 = (min(4072300500819852829, -2496986530361435150));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_19 = ((252 ? ((var_7 & (arr_7 [i_2] [i_2] [i_2 + 1] [i_2 + 2]))) : (((-((min(3, -12640))))))));
                        arr_12 [i_1] [i_2] [i_3] = (min(((((24 ? var_5 : (arr_8 [i_2] [i_1] [i_2]))) & -70)), (((var_10 | (arr_1 [i_3]))))));
                    }
                    var_20 = (min(var_20, ((((((-(max(1472218234104281801, (arr_2 [i_0] [i_0])))))) ? (arr_9 [i_0] [i_1] [i_1] [i_2 + 1] [i_2] [i_0]) : (arr_2 [i_1] [i_0]))))));
                    var_21 = ((~((min((arr_3 [i_2 + 1]), (24 >= var_0))))));
                }
            }
        }
    }
    #pragma endscop
}
