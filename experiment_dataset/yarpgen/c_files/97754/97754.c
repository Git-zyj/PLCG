/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((((79 ? var_2 : 255))) ? var_7 : ((max(var_6, var_6)))))) ? ((var_5 ? -7994 : var_6)) : -0));
    var_11 = -198188172;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, var_4));
                    var_13 ^= ((+(((((arr_0 [i_2 - 2]) ? -7979 : 248))))));
                    arr_7 [i_0 - 1] [0] [10] [i_0] |= ((+((((((arr_2 [i_2]) ? var_9 : -7996))) ? ((1 ? var_1 : var_2)) : 64))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            {

                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_21 [i_3] [16] [5] [17] = (((!var_0) ? 0 : ((((arr_6 [i_6] [i_6] [15] [15]) != (arr_11 [i_6] [i_3] [i_3]))))));
                        var_14 = (((var_9 ? 8018 : 18)));
                        var_15 = (arr_16 [i_3] [6]);
                    }
                    arr_22 [i_3 - 1] [i_4 + 1] = (((((var_8 ? (arr_17 [i_4 + 1] [i_4] [i_3 - 1]) : (arr_17 [i_4 + 2] [i_3] [i_3 + 1])))) - ((2147483634 ? (((var_9 ? 503606421 : var_4))) : -4443524846651404973))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    var_16 -= 1;
                    var_17 = (min(var_17, ((((-2147483644 ? 7996 : var_8))))));
                    arr_26 [i_3] [i_7] = ((((178 ? 2360686009574415975 : var_4)) >= var_3));
                }
                var_18 = (max(var_18, ((((((((((arr_18 [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3] [i_3]) ? -2147483635 : var_5))) ? (arr_24 [i_3] [14] [i_3] [i_3]) : (((arr_17 [i_3] [i_3] [i_3]) ? (arr_4 [i_3]) : var_1))))) ? (((((-503606426 ? 1423754198 : (arr_4 [i_3])))) ^ (min((arr_10 [i_3] [i_3]), 2871213097)))) : ((((((arr_10 [i_3] [i_3]) != (arr_24 [i_3 + 1] [0] [i_4] [i_3 + 1]))) ? (min((arr_20 [i_3] [i_3 - 1] [i_4 - 2] [i_4]), (arr_1 [9] [i_4]))) : var_6))))))));
            }
        }
    }
    #pragma endscop
}
