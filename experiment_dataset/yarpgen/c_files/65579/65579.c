/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~var_11) > (min(var_3, (var_3 & var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, ((((((65526 & (arr_5 [i_2])))) > var_17)))));
                    var_21 *= ((((((!(arr_2 [i_0]))))) | (max(((var_15 ? var_1 : 9)), (arr_6 [i_2] [10] [10] [10])))));
                }
            }
        }
    }
    var_22 = (min((((!40116) ? (-5 & var_15) : (min(var_5, var_3)))), ((var_13 ? var_17 : (var_0 * var_18)))));
    var_23 = (min(var_4, (((40111 ? 4291955377 : 0)))));
    #pragma endscop
}
