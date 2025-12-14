/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-var_11 + ((((var_1 ? var_6 : 1))))));
    var_13 = (+(((15146394463107612768 == 3300349610601938847) ? (min(15146394463107612758, var_10)) : 4593671619917905920)));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_14 -= ((!15146394463107612768) & (((~var_1) + (((arr_0 [i_0]) ? 18 : (arr_1 [1]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = 148;
                    arr_9 [i_0 + 2] [i_0] [i_0 + 2] = (arr_7 [i_2] [i_0]);
                    arr_10 [i_0] [i_1] [i_0] = 7143788968172248460;
                    var_16 = var_6;
                    arr_11 [i_0] [i_0] [i_1] [i_0] = (((arr_7 [i_0 + 1] [i_0]) ^ (var_1 || -var_1)));
                }
            }
        }
        var_17 = 11302955105537303155;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                {
                    arr_18 [i_0] = (arr_1 [i_0]);
                    var_18 -= ((8918215108399178738 ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 2])));
                    arr_19 [i_4] [i_0] [i_3] = (((-(arr_6 [i_0] [i_0] [i_0]))));
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 4; i_7 < 23;i_7 += 1)
                    {
                        var_19 = var_0;
                        var_20 = (min(var_20, (((var_0 ? 127 : var_2)))));
                    }
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        arr_27 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] [i_0] [i_0] = 28719;
                        var_21 *= (18446744073709551585 > 9528528965310372860);
                    }
                    var_22 = (min(var_22, (arr_20 [i_4] [i_0 + 2] [i_6] [18] [i_4 + 1])));
                    var_23 = (arr_12 [i_0]);
                }
                arr_28 [i_0] = ((~(arr_26 [i_0 + 1] [i_0 - 2] [i_4] [i_4 + 1] [i_4 + 1])));
                var_24 -= (~6770);
            }
            arr_29 [i_0] [i_0] [i_0] = -var_2;
        }
    }
    var_25 = -var_0;
    var_26 ^= (-var_9 ? var_10 : (((var_9 ? 85 : var_8))));
    #pragma endscop
}
