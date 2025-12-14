/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((var_14 + 2645425039) || (((var_6 ? var_10 : var_15))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = ((((((min(8191, var_8))))) >= (min((arr_4 [i_0] [i_0]), var_12))));
                arr_5 [i_0] [i_0] = ((~(max(var_15, var_6))));
                var_18 = ((var_7 ? (min(((min(var_8, var_7))), (((arr_0 [i_0] [9]) ? 57345 : var_1)))) : var_15));
                var_19 = ((var_3 ? ((((var_7 >= ((max(65535, var_10))))))) : ((~(arr_3 [i_0] [i_1 - 1] [i_0])))));
            }
        }
    }
    var_20 = 2;
    #pragma endscop
}
