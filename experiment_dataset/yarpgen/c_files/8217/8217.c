/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (max(var_20, -1826198549));
                var_21 = (min(var_21, (((-1840201293 ? (arr_3 [i_0]) : ((var_0 + (arr_3 [11]))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_22 = (min((((arr_6 [i_2 - 2] [i_2 - 1] [i_2]) - var_18)), (((var_8 >= (max(var_5, 1849660290)))))));
                            var_23 = ((min((arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1]), (arr_7 [i_2 + 1] [i_2 + 1] [i_3 + 2]))) - (max(var_13, (arr_7 [i_2 + 1] [2] [2]))));
                        }
                    }
                }
                var_24 = (max(var_24, ((((211 & -1826198549) ? (arr_7 [i_1] [i_0] [i_0]) : ((((((-1339377880 ? 4637365324849372925 : 8884525567389476472))) ? (((!(arr_2 [i_1])))) : (((!(arr_1 [i_1]))))))))))));
                arr_10 [i_0] = (arr_1 [i_0]);
            }
        }
    }
    var_25 = (min(var_25, var_4));
    var_26 += (min(((var_13 ? var_15 : (6467653616677042321 <= var_12))), (((var_15 - var_17) ? -1849660276 : var_2))));
    #pragma endscop
}
