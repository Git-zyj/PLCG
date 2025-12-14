/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_12 += ((((!(((-1170296652404061123 ? 65511 : 1531809163))))) ? (min(var_6, (arr_1 [i_0]))) : (arr_2 [6])));
        arr_3 [i_0] = (arr_2 [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_13 = (((arr_5 [i_0] [i_1]) ? (arr_1 [i_0 + 1]) : 24821));
            var_14 = (max(var_14, (((-(arr_4 [10]))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    {
                        var_15 = (((-1692468588787019204 + 9223372036854775807) << (((arr_7 [i_0 - 2] [i_0] [i_0] [i_0]) - 12358))));
                        var_16 = (arr_2 [i_0]);
                    }
                }
            }
        }
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            var_17 = (arr_2 [i_0]);
            var_18 = (min(var_18, 15));
            var_19 = (min((((3572822067 == (((arr_15 [i_0] [21] [i_0]) ? (arr_4 [i_0]) : var_2))))), var_8));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        var_20 = (max(var_20, (((((min(((var_10 & (arr_4 [i_5]))), (arr_12 [i_4 - 1])))) ^ ((var_5 & (((666954864 ? var_9 : (arr_19 [i_6])))))))))));
                        var_21 = (((((-2662096561190095622 ? 255 : -2088974931165607282))) ? ((((max(-59, -8806904123835035420))) ? var_4 : 666954860)) : (((!(arr_0 [i_0]))))));
                        var_22 = ((-(min(-2662096561190095627, (arr_14 [i_0 + 1] [i_4 - 1] [i_4 + 2])))));
                    }
                }
            }
            var_23 |= (arr_21 [i_0 - 1] [i_4] [i_4] [20]);
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_24 = (min(var_24, (arr_2 [i_7])));
            var_25 = var_10;
            var_26 = (arr_15 [i_0] [i_0 - 2] [i_0]);
            var_27 = (((((2662096561190095641 ? (max(18446744073709551599, 1572864)) : 807440330999519316))) ? ((-1137675679383115891 ? (arr_9 [i_0 - 1] [i_0] [i_0 - 2]) : var_9)) : (max(-5939737800135212883, (arr_24 [i_0 - 1] [i_7])))));
        }
        var_28 = (+(((arr_22 [i_0 - 1] [i_0 - 2] [i_0 + 1]) ? 2662096561190095638 : (arr_22 [i_0 - 1] [i_0 + 1] [i_0 - 2]))));
    }
    var_29 = (((((var_9 ? (~6941888987367092599) : var_11))) || (((var_5 ? var_10 : var_5)))));
    #pragma endscop
}
