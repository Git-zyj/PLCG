/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((max(var_1, var_13))) ? var_6 : ((min(var_5, var_6))))) + ((((~0) != -var_13)))));
    var_17 = var_12;
    var_18 = ((10194973850336945173 ? 18446744073709551615 : 11521));
    var_19 = (min(var_19, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (!1);
                var_21 = -15130776553232790261;
                var_22 = (arr_3 [i_0] [i_1 - 1]);
                var_23 = (max(var_23, (((((max(((var_5 ? (arr_4 [i_0] [i_0] [i_1 + 1]) : (arr_1 [i_0]))), (arr_2 [i_1 - 1])))) ? var_6 : (((arr_4 [i_1] [i_1] [i_1 + 1]) ? (max(var_14, (arr_3 [i_0] [1]))) : (arr_2 [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
