/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (!-var_3)));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_11 = (((((-14 ? 2213670824 : 13))) ? ((10109921785790920323 ? (!763683407) : var_8)) : (min(var_2, (((arr_0 [i_0]) ? var_9 : -1))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_12 ^= (min((min((arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 2]), (arr_2 [i_1 - 1] [i_1 - 2] [i_1 + 3]))), (((var_4 << (32 - 22))))));
                        var_13 = (((((var_0 ? (arr_6 [i_0]) : var_2))) ? (var_2 >= 4957376298314861161) : (((!(arr_4 [i_0 + 1] [i_0 + 1] [i_0] [i_0]))))));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                        {
                            var_14 = ((((((arr_4 [i_1 - 1] [i_1] [13] [i_0]) | (arr_4 [i_1 + 3] [i_1] [i_1 + 2] [i_0])))) ? ((min(19139, (arr_4 [i_1 - 2] [4] [i_1 - 2] [i_0])))) : (arr_4 [i_1 + 2] [i_1 + 2] [i_1] [i_0])));
                            var_15 = max(((~(arr_5 [i_0] [i_1] [i_2]))), (((((65535 ? 210 : 56023))) ? ((((arr_1 [i_3]) | 1002586141))) : ((var_5 ? var_0 : var_5)))));
                            var_16 = (min(var_16, (arr_1 [i_0 - 1])));
                            var_17 = ((-((var_7 ? var_0 : (((var_4 ? var_8 : -27)))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            var_18 = ((((~(arr_7 [i_0] [i_0] [i_3]))) == ((4957376298314861161 ? (arr_8 [i_5] [i_0] [i_3] [11] [i_0] [i_0]) : (arr_12 [6] [6] [i_5])))));
                            var_19 = (arr_3 [6] [i_5]);
                            var_20 = 21408;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {
                    var_21 ^= (8336822287918631315 & (min((arr_17 [i_6]), (arr_16 [i_7] [1]))));
                    var_22 = (max((((47316 ? (~var_3) : -65517))), (min((min(var_5, var_6)), (((arr_18 [i_6] [i_8]) ? (arr_15 [11]) : (arr_20 [i_6])))))));
                }
            }
        }
    }
    #pragma endscop
}
