/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (min(143, (min(6144, (min(65525, 143))))));
                arr_6 [i_0] = (min((var_4 > 194), var_15));

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    arr_9 [i_0] [i_1 - 1] [i_2 + 1] = (min(-2063891231, 4846395191533618471));
                    var_22 *= (min((min((arr_2 [i_2 + 1] [i_2 + 1]), 0)), (((((6527637228927020365 - (arr_0 [i_0])))) ? 2775726581 : 58873))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    var_23 = 90;

                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        var_24 *= -59385;
                        arr_17 [i_3] [i_1 - 1] [i_3] [i_3] = 2937944565959302714;

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_25 = (min(var_25, (var_17 & var_1)));
                            arr_22 [i_0] [i_1] [i_3] [14] [1] [i_0] = 6917529027641081856;
                        }
                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            var_26 *= (-32767 - 1);
                            arr_25 [i_4] [i_3] [i_3] [i_3] = (var_1 - 6663);
                        }
                        arr_26 [i_0] [i_3] = ((var_4 ? (-32767 - 1) : ((var_0 ? var_0 : var_0))));
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_27 = var_12;
                            var_28 ^= ((-var_19 ? (((var_10 ? 6150 : 1))) : (var_6 - var_12)));
                        }
                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            var_29 = ((-(-32767 - 1)));
                            arr_35 [9] [i_3] = ((42 ? ((var_13 ? 11371286220323836065 : var_7)) : (-3647508664977020085 >= 200)));
                        }
                        var_30 = 15;
                        var_31 = (var_7 - var_9);
                    }
                    var_32 *= (!1);
                }
                for (int i_10 = 1; i_10 < 18;i_10 += 1) /* same iter space */
                {
                    arr_38 [i_0] [i_1] [i_10] = var_13;
                    var_33 = var_15;
                    arr_39 [i_0] [i_1] = (((!(arr_33 [i_0] [21] [i_10 + 3] [i_1 - 1] [i_1 - 1]))));
                }
            }
        }
    }
    var_34 *= ((var_12 ? (min(-1610635144084467906, 11)) : var_10));
    #pragma endscop
}
