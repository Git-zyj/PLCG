/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 -= var_9;
        var_16 = var_12;
        var_17 = (max(var_17, -1360317543));
        arr_4 [i_0] [i_0] = (min(((~(min(-1360317561, 14097457523687459494)))), ((9177218630397912256 >> (1691996090049501383 - 1691996090049501322)))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            arr_7 [i_1] [i_0] = (((arr_3 [i_0]) || (1360317542 || 16754747983660050225)));
            var_18 = (max(var_18, (arr_1 [i_0] [i_1])));
            arr_8 [i_0] [i_0] = (((((arr_0 [i_0]) >> (((arr_5 [i_0] [i_0]) - 9388)))) / (max(1360317543, 1360317546))));
            var_19 = (max(var_19, var_1));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_20 += ((!(arr_12 [i_2])));

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                arr_16 [i_3] [i_2] [i_0] = (!0);
                var_21 = ((-(arr_6 [i_0] [i_0])));
                var_22 = (min(var_22, (arr_1 [i_3] [i_2])));
            }
            for (int i_4 = 3; i_4 < 24;i_4 += 1)
            {
                var_23 = ((!(arr_18 [i_4] [i_4 - 2] [i_4])));
                var_24 = (((arr_15 [i_4] [i_2] [i_4] [i_4 - 3]) >= (arr_15 [i_0] [i_2] [i_4 - 2] [i_4 - 3])));
                var_25 = ((arr_10 [12]) <= (16754747983660050225 + var_2));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_21 [i_0] [i_5] [i_5] = ((15715832178976509568 && (arr_13 [i_0] [14])));
                var_26 *= -var_10;
                arr_22 [i_5] [i_2] [i_5] = (arr_1 [i_5] [i_2]);
                var_27 += (arr_18 [i_0] [i_2] [i_0]);
            }
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            arr_33 [i_2] [10] [1] [i_7] [0] [13] [i_8] = (1 >= 12268873538077859762);
                            var_28 = (arr_10 [i_6 - 1]);
                            arr_34 [6] [9] [1] [i_0] [i_8] &= ((-(arr_10 [i_6 + 2])));
                            var_29 = (min(var_29, ((((arr_23 [i_0] [i_6] [i_7] [i_8]) ? (arr_15 [i_6 + 2] [i_6 - 1] [i_6 + 1] [i_6 + 2]) : ((-(arr_2 [i_0]))))))));
                        }
                    }
                }
            }
            var_30 = ((1 >> (((arr_2 [i_2]) ? 0 : (arr_1 [i_0] [2])))));
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        arr_38 [i_9] = var_8;
        var_31 -= (arr_14 [i_9] [i_9] [i_9]);
    }
    var_32 *= var_2;
    #pragma endscop
}
