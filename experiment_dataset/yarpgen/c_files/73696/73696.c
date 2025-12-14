/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (((((~(arr_0 [i_1])))) ? ((~(arr_0 [i_0 + 3]))) : (((arr_0 [5]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 + 3])))));
                    arr_7 [12] [12] [i_1] [i_1] = (-9223372036854775807 - 1);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_20 = ((~(arr_8 [i_3])));
        var_21 = ((-9223372036854775807 - 1) ? (arr_6 [14] [i_3]) : (arr_2 [i_3]));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                {
                    arr_17 [i_3] = ((-(arr_5 [i_4])));
                    arr_18 [i_3] [i_3] [i_5 + 1] [i_5 + 1] = ((((((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> (18446744073709551615 - 18446744073709551578)))) ? ((((!(arr_6 [i_4] [i_5]))))) : (-9223372036854775807 - 1)));
                    var_22 = (max(var_22, (((9223372036854775807 ? (arr_15 [i_3] [i_5 - 2] [i_5] [7]) : (arr_4 [i_5 - 1] [i_4] [i_4] [i_4]))))));
                    arr_19 [i_3] = (((arr_12 [i_3] [i_5] [i_5 + 1]) ^ (arr_16 [i_3] [14])));
                }
            }
        }
        var_23 = (max(var_23, (((((arr_10 [i_3] [i_3]) ? -9223372036854775784 : var_2))))));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_24 = (min(var_24, (-20781 > 1126)));
        arr_23 [i_6] = (arr_21 [i_6]);
        arr_24 [i_6] = 9223372036854775807;
    }
    #pragma endscop
}
