/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-32767 - 1);
    var_16 = ((((~((var_9 ? var_4 : 7508087297792583659)))) & (720798071 - 0)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = 10;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_17 = ((((((arr_11 [i_0] [i_0] [i_0] [i_0]) ? var_4 : var_12))) ? 6570383115248642787 : ((22916 ? var_10 : var_4))));
                        var_18 = (arr_2 [i_0] [i_2]);
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_19 = (((((~(arr_13 [i_1] [3] [i_1] [i_1 - 1])))) ^ (((arr_2 [i_1] [i_1 - 1]) ? 7508087297792583677 : 1823))));

                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            var_20 = ((((max((min(11283, var_12)), var_8))) ? (((var_7 <= -7508087297792583660) ? (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (120 - 115))) : 7615)) : 15));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [10] [i_4] [i_0] |= (18446744073709551595 ? ((min(0, (arr_8 [i_0] [i_0] [i_0] [i_4])))) : 0);
                            var_21 |= (max((((var_5 ? 0 : (((889281615507785422 < (arr_15 [i_0] [i_0]))))))), 355299543193205869));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_22 = 1;
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] &= (((((arr_20 [i_1 - 1] [i_1 - 1] [9] [i_1 + 3] [i_6] [i_6] [i_6]) + 9223372036854775807)) << (4465524046258752246 - 4465524046258752246)));
                        }
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            arr_24 [i_0] [i_0] [i_0] |= (65520 ? (4294967295 ^ 1) : 11283);
            arr_25 [i_0] = 7987722693734015129;
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_23 = (max((((arr_27 [i_0] [i_8]) & (~-7508087297792583680))), (4076549832 ^ 3096762382)));
            arr_28 [i_8] = ((((var_1 ? var_7 : (arr_4 [i_0] [8] [i_0])))));
            arr_29 [i_0] = ((-6883585403369959798 ? 43133 : 15873201393601651234));
        }
    }
    var_24 -= (((((var_14 ^ (67108864 ^ 29)))) ? var_4 : (~var_14)));
    #pragma endscop
}
