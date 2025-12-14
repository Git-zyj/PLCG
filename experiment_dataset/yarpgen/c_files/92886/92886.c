/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (arr_2 [i_0] [i_2] [i_1 + 1])));
                    var_21 -= (((max((arr_1 [i_1 - 1]), (arr_5 [1] [i_1 + 1]))) % var_16));
                    var_22 = (min(var_22, ((min((((-(arr_3 [i_0] [i_0])))), 8444249301319680)))));
                }
            }
        }
        var_23 ^= min(var_17, var_6);
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_24 ^= ((~(arr_4 [i_3] [i_3] [i_3] [i_3])));
        var_25 *= (arr_5 [i_3] [i_3]);
        var_26 *= ((~((~(arr_0 [i_3])))));
        var_27 ^= (((!(arr_1 [i_3]))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_28 |= var_8;
        var_29 = (max(var_29, -478374756));
        var_30 *= (arr_0 [5]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_31 = (max(var_31, (arr_2 [i_5] [i_5] [6])));
        var_32 -= ((1 >> (18438299824408231935 - 18438299824408231911)));
        var_33 = arr_4 [i_5] [i_5] [i_5] [i_5];
        var_34 = (max(var_34, -176404790959528572));
    }
    var_35 += ((((var_2 ^ ((8444249301319664 ? 8444249301319665 : 67)))) + (18438299824408231926 > var_13)));

    /* vectorizable */
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        var_36 = (min(var_36, (arr_3 [i_6] [i_6 - 1])));
        var_37 = (min(var_37, (((var_8 ? (((-127 - 1) ? 9223372036854775807 : 8444249301319687)) : -1104199362)))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 18;i_8 += 1)
            {
                {
                    var_38 += var_2;
                    var_39 ^= (arr_2 [5] [i_8 - 3] [i_6 + 1]);
                    var_40 += (((arr_19 [i_8 + 3] [i_8 + 2] [i_8 + 3] [i_7]) << (((arr_5 [i_7] [i_7]) - 1816757147))));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        var_41 &= (min(var_1, (max((min(var_5, (arr_21 [i_9]))), (arr_20 [i_9] [i_9] [i_9] [i_9])))));
        var_42 ^= (arr_16 [i_9]);
        var_43 = (max(var_43, ((((((arr_21 [i_9]) ? (arr_21 [i_9]) : -58)) ^ (arr_14 [i_9]))))));
    }
    for (int i_10 = 2; i_10 < 20;i_10 += 1)
    {
        var_44 += ((((min(-9223372036854775790, 8444249301319681))) ? 9173256872506056556 : (-58 == -85)));
        var_45 -= (arr_2 [i_10 + 1] [i_10 - 1] [i_10 + 2]);
    }
    var_46 -= (!3622976698);
    #pragma endscop
}
