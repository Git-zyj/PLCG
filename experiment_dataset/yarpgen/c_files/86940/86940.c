/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = (min((max((arr_1 [i_0] [i_1]), ((-(arr_4 [i_0] [i_1 + 4]))))), (min(((min((arr_4 [i_1 - 1] [i_0]), (arr_3 [0] [i_0])))), 8180))));
                var_18 += ((var_6 && ((!((max((arr_3 [4] [10]), (arr_2 [8]))))))));
            }
        }
    }
    var_19 += (min((max(-var_14, var_5)), ((((min(var_4, var_16))) ? ((min(var_6, var_5))) : ((var_6 ? var_3 : var_14))))));
    var_20 = (((var_5 > var_3) || var_13));
    var_21 = var_11;
    #pragma endscop
}
