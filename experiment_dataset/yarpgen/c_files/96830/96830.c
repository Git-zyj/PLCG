/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, ((min((max((max(1, 18446744073709551615)), (!194))), ((-61 ? ((((!(arr_2 [i_0 - 1]))))) : (max(-1519099942, 3481428863801835775)))))))));
                    var_12 |= (9223372036854775807 ? var_6 : (var_3 || 3451361342));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 = ((!(((arr_3 [i_2]) < 3669344954))));
                                var_14 = ((~((((arr_2 [i_0 - 1]) > var_4)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (max(var_15, (((min((194 % -1519099929), (!var_1))) >> (var_10 - 1695319707)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_16 = (min(var_16, (~var_8)));
                                arr_29 [1] [i_9] [i_8] = (((arr_1 [i_5]) ? (((!(!498374180)))) : (!61)));
                                arr_30 [i_9] [i_8] [i_8] [i_9] [i_7] [i_6] [i_5] = (arr_23 [i_5] [i_6] [i_5] [i_8]);
                            }
                        }
                    }
                }
                arr_31 [i_6] = (arr_25 [i_5] [i_5] [i_5] [i_5]);
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 9;i_11 += 1)
                    {
                        {
                            var_17 = (max(var_17, (arr_26 [i_10 + 1] [i_10] [i_10 - 2])));
                            var_18 = 169;
                            var_19 ^= ((((~(~18446744073709551615))) > (arr_15 [8] [i_10 - 1])));
                            arr_38 [i_11 - 2] [10] [i_5] [i_5] [i_6] [i_5] &= arr_32 [i_6];
                            var_20 = (min(var_20, (((-((28 ? (arr_36 [i_5] [i_10 - 2] [10] [i_10] [i_10 - 2] [i_5]) : (arr_36 [i_5] [i_11] [i_11] [i_11 + 2] [i_10 - 2] [i_5]))))))));
                        }
                    }
                }
            }
        }
    }
    var_21 = (((!194) ? (((!((max(var_0, 65535)))))) : (!65535)));
    #pragma endscop
}
