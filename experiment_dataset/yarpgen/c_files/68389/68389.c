/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((((((var_4 ? var_8 : 1588056789)) ? var_5 : (var_16 / var_7))))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (((((-16692 ? 3271108685 : var_5)) == ((max(var_7, 0))))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_18 = (min(var_18, ((((arr_0 [0] [i_0]) ? (arr_0 [12] [12]) : (arr_0 [12] [i_2]))))));
                arr_9 [0] [i_1] [i_2] [i_0] |= 1;
                var_19 = (arr_5 [i_0]);
            }
            arr_10 [i_0] = (min((arr_7 [4] [i_0] [i_0]), (((((4095 ? (arr_5 [i_0]) : (arr_2 [i_0]))) <= (((242 ? 5 : -1326318116))))))));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_20 = (min(var_20, 1));
                var_21 = (max(var_21, (var_2 <= 31416)));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_22 = (min(var_22, ((((((+(max((arr_13 [i_0]), (arr_8 [4] [i_4] [4])))))) ? (((((65535 ? (arr_15 [i_0] [i_1] [2] [i_5 - 1]) : 10022))) ? ((((-21622 >= (-2147483647 - 1))))) : (((arr_2 [2]) ? 1152921504606846975 : var_5)))) : 906532229)))));
                            arr_18 [i_5 + 2] [1] [i_0] [1] [i_0] &= (((((((-9223372036854775807 - 1) ? (arr_0 [8] [6]) : ((((arr_8 [12] [12] [i_5 + 1]) ? (arr_15 [i_0] [i_0] [4] [i_0]) : var_0))))) + 9223372036854775807)) << ((((max(var_14, (arr_15 [i_4 + 1] [i_5 + 1] [0] [i_5])))) - 8807))));
                            var_23 = (max(var_23, (arr_7 [4] [2] [1])));
                        }
                    }
                }
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_24 = (arr_0 [i_0] [i_6]);
                arr_21 [i_0] [i_6] = ((((((((344952295 ? -1946857301 : (arr_2 [i_0])))) ? ((var_6 ? 1 : (arr_6 [i_0]))) : (arr_11 [i_0] [i_0] [i_0])))) ? var_15 : ((((max((arr_2 [i_0]), (arr_11 [0] [i_0] [6]))) > ((((arr_1 [i_0] [i_0]) ? -16327 : -1996896776))))))));
            }
            arr_22 [i_0] = var_7;
        }
    }
    var_25 -= 22253;
    var_26 = ((-(((((min(var_9, 182))) && (((var_3 ? var_6 : 65535))))))));

    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_27 = (min(((((max((arr_23 [i_7]), var_7))) ? ((((arr_24 [i_7]) == (arr_24 [i_7])))) : (!1))), (arr_23 [i_7])));
        var_28 = (min(var_28, (((!(!var_1))))));
        var_29 -= (arr_23 [i_7]);
        var_30 = (min(var_30, (min((!13634), (arr_23 [1])))));
    }
    #pragma endscop
}
