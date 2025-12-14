/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = (max(var_19, (var_6 >= var_6)));
        arr_2 [i_0] |= ((~(max(var_10, (max(var_4, var_8))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_5 [i_1] &= var_12;
        var_20 = 39;
        var_21 = (max((min((!var_3), (!0))), (!1)));
        arr_6 [i_1] = ((!((max(var_11, var_9)))));
        var_22 ^= (((33 ? 1482 : 52019)));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (min(((max(-1471, -114658049017335030))), (max(14183179211208197079, 18446744073709551615))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                arr_15 [i_2] &= ((var_15 ? 1506 : 3287341029));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_20 [i_2] [i_2] [i_2] [5] [i_5] [i_6] = ((~(~9223372036854775805)));
                            var_23 &= (!var_5);
                        }
                    }
                }
            }
            var_24 = (14 * 1);
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_25 = ((!(((var_8 ? var_7 : var_4)))));
            arr_24 [i_2] = (((((var_17 ? var_4 : var_3))) ? (!32) : var_15));
            arr_25 [i_2] [i_2] [i_2] = (var_12 + var_10);
        }
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    var_26 = -95;
                    arr_31 [i_2] [i_2] [i_2] [i_2] = (min((min(((1 ? 375605115 : var_2)), ((max(75, -123))))), ((-var_0 ? -90 : var_2))));
                    arr_32 [i_2] [i_2] [i_2] = ((((!(!var_14))) ? var_2 : ((((!(((var_11 ? var_8 : 18446744073709551615)))))))));
                    var_27 += (max((min(var_10, var_11)), (var_2 || 1007626272)));

                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        arr_35 [14] [14] [0] [14] = (min(((22788 & (-7550131155139796195 & -7550131155139796195))), (86 > var_2)));
                        var_28 = (!(~var_5));
                        var_29 = ((~(max(var_12, (max(17324220710872470489, var_1))))));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_30 = ((var_11 / (((((-308877600940166462 ? 18446744073709551615 : 5))) ? var_8 : var_1))));
                        arr_38 [i_2] [i_2] [15] [i_11] &= var_6;
                        var_31 ^= var_0;
                    }
                }
            }
        }
        var_32 = (min(var_32, (~-9223372036854775802)));
    }
    var_33 *= 9;
    var_34 = ((var_12 ? (~var_4) : (((!var_8) ? var_0 : ((var_9 ? var_3 : var_9))))));
    #pragma endscop
}
