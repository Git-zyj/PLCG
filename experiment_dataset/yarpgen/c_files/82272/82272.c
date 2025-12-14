/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((9956 ? 24735 : -32748)), -14594));
    var_11 = 13211;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = ((var_4 ? (((((14581 ? var_5 : (arr_4 [7]))) <= (((arr_2 [10]) / var_7))))) : ((-((min(var_4, var_9)))))));
                var_13 = ((((((~(arr_6 [i_0] [i_1] [i_0]))) < (!-14591))) ? (((~(arr_3 [i_0] [i_1])))) : (+-16713383429330824063)));
                var_14 = 18446744073709551615;
                arr_8 [i_0] [i_0] = ((min((((var_7 ? var_1 : var_4)), (((arr_4 [i_0]) - (arr_4 [i_1])))))));
            }
        }
    }
    var_15 = ((var_3 != (((var_6 % var_1) ? 1 : var_2))));
    var_16 = 32749;
    #pragma endscop
}
