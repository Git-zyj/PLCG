/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (max((((!(var_12 - var_14)))), var_8));

    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_19 -= ((var_15 >= ((~((~(arr_1 [i_0 - 2] [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, var_7));
                                var_21 -= ((((((!(arr_10 [i_0] [i_1] [i_2 - 1] [i_2 - 1] [16] [5] [5]))))) >= (max((arr_5 [i_3]), (arr_9 [12] [12] [18] [i_3])))));
                                var_22 += ((!((((arr_2 [i_0] [i_0 - 1] [i_2 + 1]) ? (arr_2 [8] [i_0 + 1] [i_2 - 2]) : 0)))));
                                var_23 += (arr_9 [i_4] [10] [10] [i_0]);
                                arr_12 [i_0] [i_1] [1] [i_2] [1] [i_2] = (max((((arr_8 [i_2]) ? 1 : 96)), ((((max(var_1, 1))) ? (arr_0 [i_0 - 1]) : (arr_7 [8] [i_2] [i_3] [i_3])))));
                            }
                        }
                    }
                    var_24 = (min((min(((var_8 ? var_1 : 0)), 109)), var_9));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_25 -= (((arr_4 [i_6] [i_5 - 1] [i_1 - 1]) ? ((((!49908) <= ((var_2 ? (arr_16 [i_0] [i_1 + 2] [17] [i_5] [1]) : var_13))))) : (min((((!(arr_10 [i_5] [2] [9] [9] [i_6 + 3] [0] [i_2])))), (((arr_8 [6]) ^ var_13))))));
                                arr_17 [i_2] [i_1] = (arr_9 [i_0] [i_2] [i_2 - 2] [i_5 - 1]);
                                var_26 -= ((+((((max((arr_2 [1] [10] [9]), (arr_15 [i_0] [18] [i_2] [i_5 + 1] [18])))) ? (arr_3 [14]) : 31361))));
                                var_27 += min((arr_16 [i_0] [i_1 + 2] [i_0] [i_1] [i_6 + 3]), ((~(((arr_3 [i_1]) ? (arr_9 [i_1] [12] [12] [12]) : var_11)))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 2; i_7 < 17;i_7 += 1) /* same iter space */
    {
        var_28 -= (+(max((arr_20 [i_7 - 2]), (((arr_4 [i_7 + 1] [i_7 + 1] [1]) * 0)))));
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    arr_25 [i_8] [i_8] [2] [i_8] = ((((((!(arr_1 [5] [17]))))) >= (((!(arr_8 [i_8]))))));
                    arr_26 [i_8] = ((((((arr_2 [i_7] [1] [1]) ? 1 : (arr_2 [i_8 - 2] [i_8 - 2] [i_7])))) ? ((~((min(19558, (arr_1 [i_7] [i_8])))))) : (((((min(var_1, (arr_19 [i_8] [i_8])))) != (arr_23 [i_8] [i_8] [15]))))));
                }
            }
        }
        arr_27 [i_7] = (((min((!var_3), (arr_13 [i_7] [i_7 + 1] [i_7] [i_7 - 1])))) ? (max(var_17, ((var_0 ? (arr_1 [i_7 + 2] [i_7]) : var_12)))) : 239);
    }
    #pragma endscop
}
