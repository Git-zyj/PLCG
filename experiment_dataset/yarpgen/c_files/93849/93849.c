/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 18446744073709551615;
        var_16 = (!18);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_17 = (-((-(arr_3 [i_1]))));
        arr_5 [i_1] = (9143927801375458102 ? ((((((!(arr_4 [i_1]))))) + (0 ^ 4294967295))) : (arr_0 [i_1]));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_18 = ((((((arr_8 [i_2 - 2] [i_2 + 1] [i_2 + 1]) ? (arr_8 [i_2 - 1] [i_2 - 2] [i_2 + 1]) : (arr_8 [i_2 - 3] [i_2 - 3] [i_2 - 1])))) % ((((((arr_11 [i_1] [i_1] [i_3]) ? 9143927801375458085 : 0))) ? (max((arr_11 [i_1] [i_2] [i_3]), -9143927801375458116)) : (arr_8 [i_2] [i_2] [i_2 + 1])))));
                    var_19 = (((((arr_7 [i_2 - 1] [i_1]) ? (arr_7 [i_2 - 1] [i_1]) : var_14)) >> (((arr_7 [i_2 - 3] [i_1]) - 106))));
                    var_20 = (max((arr_11 [i_2 - 2] [i_2 - 1] [i_2 - 2]), -4294967291));
                    arr_12 [i_1] [i_2] [i_2] = ((arr_7 [i_2] [i_2]) ? var_1 : (min(var_1, (arr_7 [i_2] [i_2 - 1]))));
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        var_21 = ((~((((min(var_14, var_10))) ? (((arr_0 [i_4]) & 0)) : (arr_0 [i_4 - 1])))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    {
                        var_22 &= ((((max((arr_0 [i_7 + 1]), ((3604576990572291962 ? 1073741824 : -9143927801375458119))))) ? (((-(!var_4)))) : ((var_7 ? 18446744073709551615 : -9143927801375458063))));
                        var_23 = (max((arr_20 [i_7] [i_5] [i_6] [i_4 + 1] [i_7 - 1] [i_4 - 1]), (arr_16 [i_4 - 1])));
                        arr_22 [i_4] = (((~3993536236) ? (~9) : (((arr_16 [i_4 + 1]) ? var_14 : (arr_16 [i_4 + 1])))));
                        var_24 = (min(var_24, var_11));
                        var_25 = (min((((arr_17 [i_4 - 1] [i_4 - 1] [i_7 - 1] [i_7 - 1]) ? var_5 : 1680628753)), ((min((~var_14), ((var_6 ? (arr_14 [i_7] [i_5]) : (-127 - 1))))))));
                    }
                }
            }
        }

        for (int i_8 = 2; i_8 < 13;i_8 += 1)
        {
            var_26 = (max(var_26, ((max((max((arr_24 [i_4 + 1] [i_8 - 1]), (arr_15 [i_4 - 1]))), (max(-117, (arr_24 [i_4 + 1] [i_8 - 2]))))))));
            var_27 = (max(var_27, (arr_0 [i_4 + 1])));
            arr_27 [i_8] [i_8] [i_8 + 1] = 127;
        }
    }
    #pragma endscop
}
