/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_5 != (max((max(18446744073709551610, var_17)), (63 >> var_0)))));
    var_21 = (((((((96 ? 27 : 1023))) ? ((var_19 ? var_0 : var_1)) : (((var_0 ? -1009 : var_10))))) <= var_19));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (((((arr_0 [i_0] [i_1 - 1]) ? (arr_0 [13] [i_1 - 1]) : (arr_0 [i_0] [i_1 + 1]))) / ((((((((arr_4 [i_0]) ? var_10 : var_1))) || -25048))))));
                var_22 = (max((((arr_4 [i_1 + 1]) ? 20738 : (arr_1 [i_0] [i_1 - 1]))), -82));
                var_23 = ((~(((4028848192 ? 23 : (arr_3 [6]))))));
            }
        }
    }
    #pragma endscop
}
