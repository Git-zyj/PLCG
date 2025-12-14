/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_0] = (-(min(-1194553033, -13910773659369980502)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = (arr_9 [i_0] [i_0] [i_0] [i_1] [i_0]);
                                var_20 = (min(var_20, ((((((max((arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] [i_3]), (arr_5 [i_3] [i_1])))) ? ((~(arr_12 [i_0] [i_0] [i_2] [i_4]))) : ((((!(arr_7 [i_1])))))))))));
                                arr_13 [i_0] [i_1] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] = ((~((-((((arr_2 [i_0]) <= 1194553028)))))));
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] = ((((arr_0 [i_2] [i_4]) / 32767)));
                                var_21 += (min((arr_0 [i_0] [i_2]), (((4535970414339571114 + 1) + (((1048575 ? 1194553049 : 990557028)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
