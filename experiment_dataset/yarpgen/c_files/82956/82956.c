/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (min(((var_5 ^ (((arr_3 [i_1] [i_1] [i_0]) ? var_1 : (arr_0 [i_0]))))), (((((0 ? var_12 : (arr_1 [i_0]))) <= var_2)))));
                var_14 ^= (((((arr_4 [i_1] [i_0]) | (arr_4 [i_0] [i_1]))) | ((min(205, 2)))));
                arr_6 [i_0] = var_3;
                var_15 = ((((max(5, 0))) | (((arr_1 [i_0]) | (((arr_4 [5] [5]) ? (arr_2 [i_0] [i_0] [i_0]) : 181))))));
            }
        }
    }
    var_16 = (((var_3 >= var_3) & ((74 ? var_8 : (~255)))));
    var_17 -= min(245, 195);
    var_18 = var_7;
    var_19 = (max(var_19, ((((((((var_4 ? 159 : var_1)) >= ((var_0 ? var_3 : var_5))))) <= (((((var_5 ? var_13 : var_4))) ? ((var_5 ? var_9 : var_12)) : (~var_5))))))));
    #pragma endscop
}
