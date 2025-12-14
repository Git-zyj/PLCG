/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [1] [i_0] [i_1] = var_9;
                arr_8 [7] [i_1] [i_1] = ((((((!(arr_3 [i_0]))) ? (arr_5 [i_0] [i_0] [i_0]) : ((127 - (arr_6 [i_0] [i_0]))))) == var_15));
                var_20 = ((((((((arr_6 [i_0] [i_0]) ? var_11 : var_7))))) + 1179031354));
                arr_9 [i_0] [i_0] = (((((max((arr_5 [i_0] [i_1] [i_0]), 53036)))) == ((((((arr_6 [i_0] [i_0]) ? 0 : (arr_0 [i_1])))) ? ((18 >> (var_18 - 66))) : ((((arr_4 [i_0] [i_1]) ? var_3 : (arr_5 [i_0] [i_0] [i_1]))))))));
            }
        }
    }
    var_21 = ((((((~69) ? ((var_9 ? var_8 : 255)) : (~var_10)))) ? ((var_7 * (~4294967282))) : var_3));
    var_22 = var_17;
    #pragma endscop
}
