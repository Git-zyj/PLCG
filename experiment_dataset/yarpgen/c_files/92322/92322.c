/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 -= (min(((-42256 * (arr_5 [i_0] [i_0] [i_1]))), (((var_10 != (((arr_0 [i_0]) ? (arr_5 [i_0] [i_1] [i_1]) : (arr_3 [20] [20]))))))));
                arr_7 [i_0] [i_0] [i_1] = (((((arr_5 [i_0] [i_1] [i_0]) <= (arr_6 [i_0] [i_1]))) ? (min(((((arr_0 [i_1]) > -25012))), (~94))) : (arr_4 [i_1])));
                var_19 *= var_17;
                var_20 = ((-25012 ? 6 : -25012));
                var_21 = (max(var_21, ((((((~((var_10 ? (arr_6 [1] [i_0]) : (arr_5 [i_0] [i_0] [i_0])))))) ? ((((arr_4 [i_0]) && (arr_4 [i_0])))) : ((24989 ? (((var_0 > (arr_2 [i_0])))) : ((var_1 ? var_9 : (arr_3 [i_0] [i_0]))))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_22 = (min(var_22, ((((((10528 % (arr_13 [i_3] [i_3 + 2])))) ? (arr_13 [7] [i_3 + 2]) : ((max((arr_13 [7] [i_3 + 2]), 1))))))));
                    var_23 = (arr_2 [i_2]);
                }
            }
        }
    }
    var_24 ^= (min((-var_15 || var_16), (max((max(var_15, var_17)), var_4))));
    var_25 = (min(var_25, (((var_16 ? -var_13 : (((!((max(var_7, var_1)))))))))));
    #pragma endscop
}
