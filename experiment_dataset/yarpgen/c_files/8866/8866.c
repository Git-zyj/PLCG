/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((var_7 * (((((((min(var_9, (-9223372036854775807 - 1))) + 9223372036854775807)) + 9223372036854775807)) >> (var_7 - 72)))));
    var_11 = (max(var_11, (((-(var_9 / var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = (max(95, (arr_3 [i_0] [i_1] [i_1])));
                arr_4 [i_0] [i_0] [12] = ((((((min(var_6, 288537429))) ? var_2 : (max(var_9, 9223372036854775807)))) << (((!((((arr_3 [i_0] [i_1] [i_1]) % 18446744073709551591))))))));
                var_13 = (min(var_13, (((((((arr_0 [i_0]) ? (arr_0 [i_1]) : 9223372036854775807))) ? ((((arr_0 [12]) % var_3))) : (((((-1208650638 ? var_5 : 0))) ? (-9223372036854775807 - 1) : -1711628909)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_14 = ((((((min(var_8, 0)) | (!9223372036854775797)))) ? (((((min(111, var_0))) ? (((!(arr_8 [i_2] [i_3])))) : var_6))) : (((!9223372036854775807) | var_4))));
                var_15 = ((((max((arr_6 [i_3]), (-2147483647 - 1)))) + (arr_6 [i_3])));
            }
        }
    }
    #pragma endscop
}
