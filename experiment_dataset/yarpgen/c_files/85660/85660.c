/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((((arr_5 [i_0]) + (arr_7 [i_0] [i_0] [18]))), ((max(22071, (arr_7 [i_0] [i_1] [i_3]))))));
                        var_18 = ((((((20 ? var_15 : (arr_8 [i_1] [i_1] [i_3])))) ? (((var_17 && (arr_1 [i_2])))) : (arr_11 [i_3] [i_2] [i_1] [i_0]))));
                        var_19 = (min(((max((arr_0 [i_1]), (min((arr_11 [i_0] [i_1] [i_2] [i_3]), var_11))))), (((arr_1 [i_1]) - (arr_1 [i_0])))));
                        arr_13 [0] [i_2] [i_1] [0] = ((!((!(5320563166619024143 && 5320563166619024173)))));
                        var_20 = (arr_9 [i_0] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_18 [i_5] [i_4] [18] [i_2] [i_1] [i_0] |= ((((max((arr_14 [i_0] [i_1] [i_2] [i_4 - 1] [i_5]), (arr_14 [i_0] [i_1] [i_0] [i_4] [i_5])))) ? ((~(arr_10 [i_0] [i_0] [i_2] [i_0]))) : (arr_14 [i_0] [i_0] [i_0] [9] [i_0])));
                                arr_19 [i_0] [i_1] = (((((((max((arr_5 [i_0]), (arr_7 [i_0] [i_0] [i_0])))) ? (((min((arr_7 [i_1] [i_2] [i_4 + 2]), (arr_4 [i_0]))))) : (max(var_4, (arr_10 [i_0] [i_1] [i_2] [i_4])))))) ? (arr_17 [i_0] [i_1] [i_2] [i_0] [i_5] [i_1] [i_5 - 3]) : (77 * var_2)));
                                arr_20 [i_0] [i_0] [i_2] [i_4] [i_5 - 3] = ((var_7 ? (~124) : ((-(arr_11 [i_5] [i_5 - 3] [i_5 - 3] [i_4 - 1])))));
                                arr_21 [i_5] [i_5] [i_5] [i_5] [i_5] = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 *= ((var_5 ? (!var_15) : var_6));
    var_22 &= (((((var_12 < (var_14 - 18)))) < ((-(var_16 - var_2)))));
    #pragma endscop
}
