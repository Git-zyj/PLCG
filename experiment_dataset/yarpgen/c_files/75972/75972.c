/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((((-2147483647 - 1) ? 2603640599 : 2147483647))), ((max(var_8, ((var_2 ? var_9 : var_10)))))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_12 = (max((((!(((~(arr_1 [i_0]))))))), var_7));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        var_13 = ((~((-4951033317461843081 ? ((491781225934033053 ? 0 : 3745551954)) : (((min(var_10, var_6))))))));
                        var_14 = (min(var_14, -6161801337972894643));
                    }
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 20;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {

            for (int i_6 = 3; i_6 < 20;i_6 += 1) /* same iter space */
            {
                var_15 = var_3;
                var_16 = (min((!var_4), (max((arr_0 [i_4 + 1] [i_6 - 2]), (min(var_0, (arr_12 [i_4])))))));
                arr_20 [i_5] [i_5] [i_5] = (arr_15 [16] [16]);
            }
            for (int i_7 = 3; i_7 < 20;i_7 += 1) /* same iter space */
            {
                var_17 = (max(var_17, ((min(var_8, (((((arr_1 [i_4 - 3]) + 9223372036854775807)) << (((-6161801337972894643 + 6161801337972894658) - 15)))))))));
                var_18 = (arr_3 [i_4] [18]);
                var_19 = min(((((var_7 != (arr_1 [i_5]))) ? (arr_4 [i_7 - 3]) : var_0)), ((-(min(1824395213682911958, var_4)))));
            }
            for (int i_8 = 2; i_8 < 18;i_8 += 1)
            {
                arr_26 [i_5] [i_8] [i_4] [i_5] = (max((((arr_17 [i_8 + 3] [i_5] [i_5] [i_4 - 1]) ? (arr_17 [i_8 - 1] [i_5] [i_5] [i_4]) : (arr_17 [i_8 - 2] [i_5] [i_5] [i_4 - 2]))), (((var_4 ? (arr_11 [i_8] [i_5] [i_8 - 2] [i_8] [i_8]) : var_10)))));
                var_20 = ((((((arr_19 [i_4] [i_4 - 2] [i_4 - 2] [i_5]) ? (arr_4 [i_4]) : var_8))) ? (((((arr_5 [i_4] [i_4] [17]) <= var_1)) ? (((min((arr_24 [i_4] [i_4] [i_5] [i_8]), 16914)))) : 2147483647)) : (arr_1 [i_5])));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_21 = (((var_0 * (arr_27 [i_4 + 1] [i_4 + 1] [i_8] [i_8]))));
                            var_22 ^= ((((-var_9 - ((min((arr_8 [i_10] [i_9] [i_8]), var_2))))) == ((min((arr_30 [i_4] [14] [i_4 + 1] [i_4] [i_4]), var_10)))));
                        }
                    }
                }
                arr_32 [18] [i_5] [18] [18] = (((arr_23 [i_4] [i_5] [i_8 - 1] [4]) < ((11033696778863630968 ? var_4 : (arr_23 [i_4 - 3] [i_4 - 3] [i_8 - 1] [i_4])))));
                var_23 = (i_5 % 2 == zero) ? ((((arr_21 [20]) << (((((1 - (arr_28 [i_5] [i_8])))) - 897569637))))) : ((((arr_21 [20]) << (((((((1 - (arr_28 [i_5] [i_8])))) - 897569637)) - 136670893)))));
            }
            for (int i_11 = 4; i_11 < 19;i_11 += 1)
            {
                var_24 = (min(var_24, (var_8 || var_10)));
                arr_37 [i_5] [i_5] [i_5] = (max((((max((arr_6 [i_4]), 65535)))), (((arr_11 [i_4] [16] [1] [i_11] [i_11]) ? (min(-6161801337972894643, var_8)) : ((((!(arr_22 [11] [i_4] [11])))))))));
            }
            var_25 = (min(((((arr_6 [i_4 + 1]) < (arr_6 [i_4 + 1])))), ((var_9 ? (arr_6 [i_4 - 3]) : var_0))));
        }
        arr_38 [1] = (~var_1);
        var_26 |= var_6;
    }
    var_27 = max(var_8, var_0);
    #pragma endscop
}
