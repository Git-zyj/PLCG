/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((var_2 ? var_13 : ((25 ? var_15 : 9223372036854775807))));
    var_17 = (min(var_17, (((var_6 ? var_9 : var_7)))));
    var_18 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0 + 3] = ((((((arr_2 [i_1 - 3] [i_1 + 1] [i_1 - 3]) ? var_14 : (arr_5 [i_1 - 3] [i_1 + 1])))) ? ((18446744073709551615 ? 18446744073709551615 : 0)) : ((18446744073709551615 ? 0 : 65517))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_15 [i_1] [i_1] [i_1 + 2] = (((((var_9 ? (((var_7 ? (arr_12 [i_0] [1] [23] [1]) : 31))) : ((var_9 ? 512 : -4822412700418241889))))) ? ((var_3 ? var_11 : (arr_4 [i_1]))) : (((2190385235094056434 ? var_12 : var_11)))));
                            arr_16 [13] [i_1 - 3] [i_1] [i_1] = ((((((arr_0 [i_0]) ? (arr_7 [i_0 + 2]) : 20))) ? ((2097151 ? -4822412700418241879 : var_13)) : (((var_13 ? var_14 : var_15)))));
                        }
                    }
                }
                arr_17 [i_1] [i_1] = ((((0 ? var_12 : (arr_13 [i_1] [i_0])))) ? ((var_0 ? (arr_7 [i_0 + 1]) : 4515)) : (((arr_13 [i_1] [i_1]) ? var_7 : (arr_7 [i_0 - 1]))));
            }
        }
    }
    var_19 = (max(var_19, (((var_13 ? var_2 : (((((var_0 ? var_13 : var_2))) ? var_5 : ((var_0 ? 3518662447 : 4822412700418241888)))))))));
    #pragma endscop
}
