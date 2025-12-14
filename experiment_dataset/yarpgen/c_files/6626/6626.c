/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 &= ((((((arr_0 [8]) ? (arr_1 [0] [2]) : var_0))) ? (arr_0 [i_0]) : var_11));
        var_16 = (max(var_16, 53));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            {
                var_17 = (min(var_17, 109));
                var_18 = (max(var_18, (((!((((arr_3 [i_1]) % (arr_5 [1] [14])))))))));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    var_19 = ((arr_8 [i_2 - 1] [5] [4] [i_2 - 1]) * (arr_8 [i_2 + 4] [8] [1] [i_2 + 3]));
                    var_20 = ((((arr_5 [0] [1]) ? var_0 : var_3)));
                    var_21 ^= (arr_9 [0] [2] [12] [10]);
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    arr_14 [4] [14] [2] [8] |= var_0;
                    var_22 -= (min((((((arr_5 [6] [11]) == -57)) ? (var_11 <= var_14) : (var_8 != var_13))), 53));
                    var_23 = (min(var_23, (((max((!9112), (var_12 / 110))) >= ((((min((arr_13 [1] [0] [8] [14]), var_14))) ? var_11 : (((arr_8 [9] [11] [10] [4]) << (106932517 - 106932505)))))))));
                    var_24 = (min(var_24, ((((((((-58 >= 18446744073709551615) != ((-56 ? 1692774528713158661 : (arr_8 [4] [4] [0] [12]))))))) % ((~(arr_9 [i_2 + 1] [10] [8] [i_2 + 4]))))))));
                    var_25 = (((((-(arr_6 [i_2])))) ? ((min(var_7, (var_9 || 40)))) : (arr_6 [i_2])));
                }
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    var_26 ^= (min(((((((arr_8 [4] [11] [3] [1]) <= 212))) << ((((min(15177, var_12))) - 57)))), (((((13966070862987567051 * (arr_13 [0] [14] [1] [6]))) < (((67 ? 0 : 198401241))))))));
                    var_27 = (min(var_27, ((min((~59), ((var_4 ? (arr_9 [14] [4] [8] [2]) : (35845 - 13966070862987567051))))))));
                    arr_17 [i_2] [2] [9] [i_2] = (((((1847726330659117795 << ((((46 ? 13966070862987567051 : (arr_7 [i_2] [1] [14]))) - 13966070862987567049))))) ? (arr_13 [2] [1] [13] [i_2]) : (arr_5 [14] [6])));
                }
            }
        }
    }
    var_28 = ((9111 ? -7 : -736295277));
    var_29 = ((((((var_1 + var_8) - ((max(var_11, var_2)))))) ? var_10 : (~-78)));
    #pragma endscop
}
