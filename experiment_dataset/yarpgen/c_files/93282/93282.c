/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((!(var_9 >= var_10))));
    var_19 = var_2;
    var_20 &= ((~((((var_0 > var_8) && 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] = -60;
                arr_6 [i_0] [i_1] = ((((-(((arr_3 [i_0]) * var_12)))) == ((((!var_4) - var_2)))));
                arr_7 [i_0] [i_0] = ((((150 > 46909) + (max((arr_1 [i_0] [i_1]), (arr_1 [i_1] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
