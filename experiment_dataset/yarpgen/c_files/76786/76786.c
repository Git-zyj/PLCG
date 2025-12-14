/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    var_21 = (max(var_21, (var_7 | var_11)));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = (((arr_7 [i_2] [i_2]) ? (min(((((arr_8 [10] [i_1] [i_1] [i_1]) >= (arr_7 [i_2] [i_1])))), (min(var_6, (arr_3 [i_0]))))) : (((((arr_6 [i_0] [i_1]) ? 18014398509481983 : (arr_8 [i_0] [i_0] [i_2] [i_1]))) >> (((arr_2 [i_1] [i_1]) + 664683770185642804))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_22 = (((((((12021949398815262523 ? (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4 - 1]) : (arr_1 [i_4 - 1] [i_4]))) + (arr_0 [i_3])))) ? (!var_11) : ((((arr_15 [4] [4] [i_4] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_2]) == (arr_15 [i_4] [i_4 + 1] [i_4 + 2] [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_2]))))));
                                var_23 |= (min((arr_0 [10]), ((-(arr_10 [i_4 + 2] [6] [i_1] [i_4] [i_4 + 2] [i_4 + 2])))));
                                var_24 = (max(var_24, (arr_14 [i_0] [i_0] [4] [i_3] [i_4])));
                                arr_16 [i_2] [1] [i_2] [7] [i_2] [i_2] = ((-((-745382441055268623 ? (arr_6 [i_0] [i_4 - 1]) : (arr_6 [i_4] [i_4 + 1])))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_0] [1] [i_0] = ((var_11 % (((-(arr_6 [i_0] [i_0]))))));
                    var_25 = (((~(arr_0 [i_1]))));
                    var_26 = ((((((arr_0 [i_0]) ? (arr_18 [2] [i_1] [i_1]) : (arr_11 [i_0] [i_0] [i_0])))) ? ((~((1 % (arr_18 [i_0] [i_0] [i_0]))))) : (((~255) % (((var_2 + 2147483647) >> (var_6 + 7334945291948004358)))))));
                    var_27 = ((-var_8 ? (max(var_4, var_9) : (((2 ? var_17 : var_16))))));

                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_28 = (((max((arr_5 [i_0]), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]))) ^ ((((!((max((arr_3 [i_0]), (arr_17 [5] [5] [i_5] [5]))))))))));
                        var_29 = (max((((min(-2087658563, 276823793453621462)) / (min(12972621709492430012, 1)))), 10708390210432797492));
                        arr_23 [i_0] [i_0] [8] [0] = (arr_7 [i_1] [i_1]);
                    }
                }
                arr_24 [i_1] = ((-(((!(arr_5 [i_0]))))));
            }
        }
    }
    var_30 = (3164748386 - 10708390210432797492);
    var_31 = (min(((var_15 ? (7931543816594618727 >= 6) : var_14)), (min(var_7, (max(var_9, var_3))))));
    #pragma endscop
}
