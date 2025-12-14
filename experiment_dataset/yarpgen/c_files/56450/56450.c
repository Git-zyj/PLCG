/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = -1309733759;
                arr_6 [i_0] [i_0] [i_0] &= (((((50389 | (max(-1309733759, var_1))))) ? var_13 : (((arr_5 [i_0]) ? (arr_3 [i_1]) : ((((!(arr_1 [i_0] [i_0])))))))));
                var_21 = (max((arr_1 [i_1] [i_0]), (min(var_15, var_14))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_22 = var_10;
                    var_23 = ((-((min((arr_8 [i_0] [i_1] [i_2]), (arr_5 [i_2]))))));
                }
            }
        }
    }
    var_24 = var_1;
    var_25 = var_7;
    #pragma endscop
}
