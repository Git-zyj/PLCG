/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 3849403584;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [18] [i_0] = ((min(((var_10 << (((arr_1 [i_0] [i_0]) - 3129)))), ((var_13 >> (-7631292299788944094 + 7631292299788944120))))));
        var_18 -= ((((((max((arr_1 [7] [i_0]), (arr_1 [i_0] [i_0])))) ? (var_7 ^ 3849403580) : ((((-2147483647 - 1) ^ (arr_0 [i_0]))))))) || (((192 ? (((max(var_11, 151)))) : ((32749 ? var_10 : var_9))))));
        var_19 = (min((((-((var_5 ? var_2 : var_15))))), ((var_15 ? ((var_12 ? var_11 : 3849403584)) : var_13))));
        arr_3 [i_0] [i_0] = (min(var_16, (((!(((arr_1 [i_0] [13]) || var_5)))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_20 = (max(var_20, (((!(arr_4 [i_1]))))));
        var_21 = (max(var_21, ((max(((-(arr_1 [i_1] [i_1]))), ((max(var_16, (arr_1 [i_1] [i_1])))))))));
        var_22 = (((var_13 ? (max(2147483647, var_0)) : (max((arr_6 [i_1]), (arr_5 [i_1]))))));
        var_23 = ((var_14 ? (((((((arr_4 [4]) ? (arr_0 [i_1]) : var_6))) || var_8))) : ((((((165 ? 39 : 81))) || var_0)))));
        var_24 *= var_16;
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_25 = var_0;
                    var_26 = (min(var_26, ((((((-(max(var_12, var_13))))) ? 189 : ((((((arr_13 [i_2] [7] [i_4]) ? var_14 : -24599))) ? 86 : 60)))))));
                    var_27 = ((((((var_0 || var_14) ? (max(1999940938, -8996)) : var_8))) ? var_5 : (((max(3582, var_16))))));
                    var_28 = (min(var_28, var_4));
                    var_29 = (((arr_11 [i_4]) ? (var_8 * var_7) : ((var_15 ? (arr_8 [i_3 + 1]) : var_8))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = ((81 | ((104 ^ (arr_14 [i_5])))));

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_30 |= ((445563712 ? (2147483647 || 179) : (((((((arr_0 [i_5]) ? var_5 : var_4))) && var_12)))));
            arr_21 [i_5] [1] = ((((((arr_9 [i_5]) ? (arr_9 [i_5]) : var_1))) ? (arr_9 [i_6]) : -var_15));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    {
                        var_31 *= ((var_1 && ((max(var_14, ((46393 ? 99 : 116)))))));
                        arr_29 [i_5] [i_5] [i_7] [i_5] [i_5] = ((25291 ? (~77616945) : (-63 - -1313552251)));
                        var_32 -= var_13;
                        arr_30 [i_5] [i_7] [i_5] [i_5] [i_7] [i_8] = ((-82 ? ((var_3 ? var_7 : (max(0, 445563712)))) : (!var_6)));
                    }
                }
            }
            var_33 *= 207;
        }
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
    {
        var_34 = (min(var_34, 81));
        var_35 ^= (((max((((var_9 ? var_6 : -82))), ((-85 ? var_5 : var_1)))) ^ -41));
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
    {
        arr_36 [i_10] = (arr_8 [i_10]);
        arr_37 [i_10] = var_2;
    }
    #pragma endscop
}
