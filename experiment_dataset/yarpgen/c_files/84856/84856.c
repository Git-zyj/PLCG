/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = ((~(arr_0 [i_0] [i_0])));
        var_15 = ((18348 ? 18348 : (65195 - 18358)));
        var_16 = (max(var_16, (((((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))))));
        var_17 += (((arr_0 [i_0] [i_0]) ? 2923124729694176617 : 231));
    }
    var_18 = ((var_0 > (min(((var_0 ? 2008109074 : 18328)), 28))));
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 7;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_2] [i_2] = (-25613 || 4225306559325332154);
                        var_19 = (((max(29, (arr_11 [i_2 - 2] [i_2] [i_3] [i_1] [i_2] [i_3]))) % (arr_4 [i_1])));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_2] [i_2] [i_3] [i_3] = ((((~(arr_15 [i_1 + 1] [i_2 + 2]))) != (((arr_6 [i_2]) | 14))));
                        arr_17 [i_2] [i_3] [i_3] = 1;
                        arr_18 [i_1] [i_1] [i_3] [i_1] [i_5] &= ((~((18 ? 235 : 235))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_20 = (~(((~1) ? (18331 | -18328) : (0 && 8))));
                                var_21 = (((arr_7 [i_2]) < ((-234 / ((-(arr_20 [i_2] [i_2] [i_6] [i_6])))))));
                                var_22 -= ((!((min((arr_19 [i_3] [i_6 + 1] [i_3] [i_6]), (arr_19 [i_3] [i_6 + 1] [i_7] [i_7]))))));
                                var_23 = (((arr_19 [i_2] [i_1 + 2] [i_1 + 2] [i_1 - 1]) <= (~34)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
