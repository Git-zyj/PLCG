/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = var_3;
        var_14 = 62;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_9 [i_0] [i_2] = (max((((max(var_12, var_9)))), var_9));
                        var_15 = var_8;
                        arr_10 [i_0] [i_2] [16] [i_3] = (229 + -9223372036854775803);
                    }
                    var_16 = (((arr_4 [i_2]) ^ -33));
                    var_17 = ((((arr_6 [i_0] [9] [i_2 + 1]) && (arr_3 [i_1] [i_1 + 1] [i_2 + 2]))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_18 = min(((min((arr_12 [i_4] [i_4]), (((arr_12 [i_4] [i_4]) ? var_0 : 3840))))), ((45812 ? (((961573087 ? 936 : var_3))) : 18446744073709551615)));
        arr_13 [i_4] = (min((arr_11 [i_4]), (arr_11 [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_22 [i_4] [i_5] = ((+(((arr_19 [i_4] [i_5] [i_5] [i_4]) ? (arr_18 [i_4] [i_4] [i_6]) : (arr_18 [i_4] [i_4] [i_6])))));
                    arr_23 [i_4] [i_4] = ((((83 - (arr_15 [i_4] [i_4] [i_4]))) * var_4));
                }
            }
        }
        arr_24 [i_4] = (arr_17 [i_4] [i_4] [i_4]);
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        var_19 = ((~(min(((var_10 ? var_7 : 785441579059741385)), 11296))));
                        arr_34 [i_4] [i_4] [i_4] [i_4] = var_6;
                        arr_35 [i_4] = (arr_12 [i_4] [i_4]);
                        arr_36 [i_4] [i_4] [i_4] [i_9] = (min(961573097, ((((arr_25 [i_4] [i_4] [i_7 + 1]) + var_8)))));
                    }
                }
            }
        }
    }
    var_20 = -1772163558;
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                {
                    var_21 = (arr_42 [i_11]);
                    arr_45 [i_10] [i_11] [i_10] [i_12] = (arr_41 [i_10]);
                    arr_46 [i_10] [i_10] [i_12] = (((arr_21 [i_10] [i_10] [i_12]) * (arr_44 [i_10] [2] [i_12])));
                }
            }
        }
    }
    #pragma endscop
}
