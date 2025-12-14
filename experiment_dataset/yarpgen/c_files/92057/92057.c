/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (((~(arr_0 [i_1] [i_1 - 2]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                            {
                                arr_15 [i_0] = (((arr_9 [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_4]) && 49647));
                                arr_16 [i_0] [1] [i_1 - 2] [i_2] [i_3] [i_0] = ((((((((-(arr_0 [i_0] [i_1 + 1])))) ? ((~(arr_14 [i_4] [i_1 + 1] [12] [i_4] [i_4] [i_3] [i_3]))) : ((-(arr_14 [i_0] [2] [5] [i_4] [i_1 - 1] [12] [i_3])))))) ? (arr_9 [i_0 + 1] [i_0 - 2] [i_1 + 1] [i_1] [i_2]) : ((-(((arr_6 [i_0 - 2] [i_2] [i_0 - 2] [i_2]) ? (arr_3 [i_2] [i_0]) : (arr_2 [i_0])))))));
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                            {
                                var_16 = ((-(((((!(arr_6 [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 1])))) * (((arr_18 [i_0 - 3] [i_1] [i_2] [i_0] [i_5]) ? (arr_9 [i_0 + 1] [i_1 - 2] [i_2] [i_3] [1]) : (arr_9 [i_0] [i_1] [i_1] [i_3] [i_5])))))));
                                arr_19 [i_0 - 3] [i_0] [16] [i_0 - 3] = ((-((-(((arr_12 [2] [i_1 - 2] [i_2] [i_2] [i_5]) ? (arr_1 [i_0]) : (arr_12 [i_0] [i_1] [i_2] [i_2] [1])))))));
                            }
                            for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                            {
                                arr_23 [i_0] [i_1 + 1] [i_1] [i_1] = (((arr_5 [i_0] [i_0 + 1] [i_0 + 1]) ? ((-(arr_13 [i_0 - 2] [i_1 - 1]))) : (arr_5 [i_0] [i_0 - 1] [12])));
                                var_17 = ((-49654 ? (arr_10 [i_2] [i_2] [i_2] [i_2]) : (arr_14 [i_0 - 3] [i_0 - 1] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0])));
                            }
                            var_18 = ((((((~(arr_17 [i_0 - 3] [i_0] [1] [1] [11] [i_3] [i_3]))) ? ((-(arr_2 [15]))) : (arr_12 [i_1 - 1] [i_2] [i_3] [i_3] [i_3])))));
                        }
                    }
                }
            }
        }
    }
    var_19 = ((~(((!(~var_4))))));

    for (int i_7 = 3; i_7 < 16;i_7 += 1)
    {
        arr_26 [i_7] = ((((!(arr_22 [i_7] [i_7 - 1]))) ? (((!(arr_12 [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_7 - 3] [i_7])))) : ((~(arr_20 [i_7 + 1] [i_7] [i_7 - 3] [i_7 - 3] [i_7 - 3] [i_7 - 3] [i_7 - 1])))));
        var_20 = (((!(arr_11 [i_7] [i_7] [i_7 - 2] [11] [i_7]))) ? (arr_12 [i_7] [i_7 - 3] [i_7 - 3] [i_7] [i_7]) : ((~(arr_21 [i_7 - 3] [i_7] [i_7] [i_7 - 1] [i_7 - 3] [i_7 - 3] [i_7 - 3]))));
        var_21 = (((arr_4 [i_7] [i_7 - 3] [i_7 - 3]) ? (arr_2 [i_7 - 3]) : ((((arr_14 [9] [i_7] [i_7] [i_7 - 1] [i_7] [i_7] [i_7]) ? (arr_13 [i_7] [i_7 + 1]) : 1)))));
    }
    #pragma endscop
}
