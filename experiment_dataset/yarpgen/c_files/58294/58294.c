/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = (max(var_19, (max((((-5495384663992600621 ? -7 : 5495384663992600620))), (((-(var_5 >= var_10))))))));
    var_20 = 5495384663992600621;
    var_21 = ((1 ? ((max((~28), var_13))) : ((-((var_17 ? 32767 : var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_22 = (min(var_22, (((+((max((var_11 && var_5), var_12))))))));
                var_23 = (max((min(var_17, -30)), ((((arr_2 [i_1 + 1] [i_1 + 2]) ? (arr_2 [i_1 + 2] [i_1 + 2]) : var_1)))));
                var_24 |= ((((min((arr_2 [i_1 + 3] [i_1 - 1]), ((1 ? 5495384663992600635 : 1))))) ? ((((((!(arr_2 [i_0] [i_1]))))) ^ (((arr_6 [i_0] [15] [i_1]) ? var_17 : (arr_4 [i_1 - 1] [i_0]))))) : (((-(arr_6 [i_0] [i_1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
