/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 &= 1;
                    var_18 &= ((!(!1)));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        var_19 = (min(var_19, (arr_10 [i_3])));
        var_20 = (min(var_20, (((((arr_0 [i_3 + 1]) && (arr_0 [i_3 + 1])))))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_21 += var_4;
                var_22 = (min(var_22, ((-(arr_0 [5])))));
                var_23 = (min(var_23, 1));
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_24 -= (arr_9 [i_3 + 1] [i_6]);
                var_25 += 1;
            }
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_26 = (max(var_26, -9146891742971904146));
                var_27 -= ((32754 ? ((58736 ? 6821 : var_16)) : ((-32754 ? -32744 : (arr_2 [i_3 + 1] [i_3 + 1] [i_7])))));
            }
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                var_28 *= (((arr_3 [i_3 + 1]) || (arr_3 [i_3 + 1])));
                var_29 = (max(var_29, ((((arr_20 [i_3] [i_4] [i_8]) ? var_5 : (arr_20 [i_8] [i_8] [5]))))));
            }
            arr_24 [i_3] [i_3] |= (((arr_3 [i_3 + 1]) >> (32752 - 32751)));
            var_30 = (min(var_30, 65529));
        }
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_31 &= ((-32741 ? var_10 : (((((0 ? (arr_1 [i_9]) : (arr_28 [i_9])))) ? -27 : var_5))));
        arr_29 [i_9] &= ((-1 / 32753) >= (arr_25 [i_9]));
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                {

                    for (int i_13 = 4; i_13 < 18;i_13 += 1)
                    {
                        var_32 = (max(var_32, ((((arr_32 [i_10] [i_11] [i_11 + 2]) || (((58732 ? var_15 : 1))))))));
                        var_33 *= ((var_3 ? (((arr_1 [i_12]) ? 1 : ((max((arr_3 [i_10]), (arr_4 [i_10])))))) : -214));
                        var_34 = (min(var_34, (max((((arr_37 [i_10] [i_11] [i_13 + 1] [i_13] [i_10] [i_13 + 1]) ? -32742 : var_0)), (arr_37 [1] [i_11] [1] [0] [i_13 - 2] [i_13 - 1])))));
                        arr_40 [6] [i_11] [i_12] [i_13] &= (min(((63067 ? var_11 : 63)), var_15));
                    }
                    var_35 |= arr_4 [i_11];
                }
            }
        }
    }
    var_36 -= var_16;
    #pragma endscop
}
