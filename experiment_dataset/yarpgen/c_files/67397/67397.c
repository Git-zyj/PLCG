/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (min(((-9319 ? (((min((arr_0 [i_0]), 32736)))) : (~var_0))), ((((15433503293811340504 % 59539) ? 5997 : 9319)))));
                var_16 = ((~((~(arr_1 [i_1])))));
                arr_5 [i_1] [14] [i_1] = (((-(((!(arr_4 [i_1] [i_1] [i_0 - 2])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 += (((32 && -9319) ? (((!(((9319 ? 5997 : 0)))))) : (((((-4809929576793075878 + 9223372036854775807) >> (255 - 223)))))));
                            arr_12 [i_1] [i_1] [i_2] [i_2] = -3013240779898211111;
                            var_18 = (min(-1, ((13133109525850207973 ? (arr_0 [i_0]) : (arr_3 [i_0] [i_0 + 1])))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_16 [i_4] = min((arr_7 [i_4] [i_4]), (arr_7 [i_4] [i_4]));
        var_19 = (max(var_19, (((min((arr_0 [i_4]), (~101)))))));
        var_20 &= (((min((~3013240779898211112), (~175))) & (((7 >> (((arr_1 [i_4]) - 6021678507339668683)))))));
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_21 = ((3623 | (arr_14 [i_5] [i_5])));
        arr_20 [i_5] [i_5] = (~(7431720547528887165 | 9318));
        arr_21 [i_5] = (((((arr_13 [10] [i_5]) ? 32767 : -3364661353365667776)) % (arr_2 [i_5] [i_5])));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 10;i_6 += 1)
    {
        arr_25 [10] [i_6 + 1] &= ((~(~0)));
        arr_26 [i_6] = 71;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        arr_29 [i_7] = (((arr_28 [i_7]) ? ((-(arr_27 [i_7] [i_7]))) : (!15419586763041227378)));
        var_22 = ((((((-9223372036854775807 - 1) ? 19663 : (arr_27 [i_7] [i_7])))) ? (236 * 136) : 156));
        var_23 = (arr_27 [i_7] [i_7]);

        for (int i_8 = 2; i_8 < 23;i_8 += 1)
        {
            var_24 -= 14714;
            var_25 = (max(var_25, (((!(~181))))));
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            var_26 = (arr_32 [i_7]);
            arr_35 [i_7] [i_9] = ((-7641 ? 59539 : (arr_27 [i_7] [i_9])));
            var_27 = (((arr_28 [i_9]) ? 11015023526180664450 : (arr_33 [10] [i_9])));
        }
        for (int i_10 = 3; i_10 < 22;i_10 += 1)
        {
            arr_40 [i_7] [i_10 + 1] [i_10] = -7431720547528887165;
            var_28 ^= -7638;
            var_29 -= ((~(arr_37 [i_10 + 3] [i_10 + 1])));
            var_30 = 2550359718;
        }
    }
    #pragma endscop
}
