/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = 1;

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_17 ^= (min(((1 | (min(var_15, var_5)))), (max((arr_0 [i_2]), (arr_3 [5])))));
                        var_18 = ((((((min((arr_4 [i_0]), 0))) ? ((var_6 ? var_6 : var_3)) : var_7))) ? var_13 : (((!(arr_9 [7] [i_3] [i_2 - 1] [i_0] [i_0] [i_0])))));
                    }
                    var_19 = var_1;
                    var_20 = (min(var_20, (((-(((arr_5 [i_2 + 1] [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : var_12)))))));
                    var_21 = ((max(6142628863284633200, 12304115210424918393)));
                }
            }
        }
    }
    var_22 = -7;
    var_23 = (min(var_23, ((((((var_5 ? var_9 : (max(var_8, 1587754275))))) ? (~var_13) : (max(var_1, -var_3)))))));
    var_24 = ((-(min((min(5622, var_6)), var_14))));
    #pragma endscop
}
