/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_10 ? (-9223372036854775807 - 1) : var_16)))) ? (var_3 > 21) : ((((var_11 <= ((max(1, 19)))))))));
    var_18 = ((-((min(0, var_5)))));
    var_19 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] = ((1856286866 - ((0 ? (arr_1 [i_1 + 4]) : var_16))));
                    arr_7 [i_0] = ((((arr_4 [i_0] [i_1] [i_1 + 4]) & (arr_4 [i_0] [i_0] [i_1 + 2]))));
                }
            }
        }
    }
    #pragma endscop
}
