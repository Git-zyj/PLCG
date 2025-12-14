/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    arr_7 [i_1] = (((((arr_3 [i_2 + 1] [i_2 + 1] [i_2 - 2]) << (-705076816 + 705076857))) << ((((var_2 ? (((var_14 << (71 - 69)))) : (((arr_1 [i_0]) ? (arr_6 [i_0] [i_0] [i_2]) : (arr_1 [i_2 + 1]))))) - 969))));
                    var_19 = var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_3] [i_2] [i_1] [i_4 - 1] = var_17;
                                arr_15 [i_1] [i_1] = (((((var_4 - (arr_9 [i_1] [i_1] [i_4 - 1] [i_4 - 1] [i_4 + 2])))) ? (((min((arr_3 [i_0] [i_0] [i_0]), var_9)) >> (var_7 + 6270478081579908158))) : (((var_7 ? var_8 : (arr_5 [i_2 - 1] [i_1]))))));
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] = arr_3 [i_3] [i_2] [i_0];
                            }
                        }
                    }
                }
                var_20 = arr_4 [i_0] [i_0] [i_0];
            }
        }
    }
    var_21 = (max(var_21, ((((((((var_4 >= var_10) != var_9)))) - -7808876907687291964)))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            arr_30 [i_6] [i_7] [i_7] [i_7] [i_7] [i_7] = ((1691218638 || (~227)));
                            var_22 = (arr_29 [i_6] [i_6] [i_6 + 1] [i_6 + 2] [i_6]);
                            arr_31 [i_5] [i_6 + 1] [i_6] [i_5] [i_6] [i_8] [i_9] = ((~(arr_25 [i_5] [i_6 + 1] [i_6] [i_8])));
                            arr_32 [i_5] [i_5] [i_6] [i_5] [i_5] = (((arr_23 [i_6 - 1] [i_6 - 1] [i_9]) ? 8644623701379980632 : var_6));
                        }
                        var_23 = (max(var_23, var_5));
                        var_24 = var_0;
                        arr_33 [i_6] = var_17;
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        var_25 = (!var_2);
                        arr_36 [i_6] [i_10] [i_10] [i_10] [i_10] = ((((~(arr_25 [i_5] [i_6 + 2] [i_6] [i_6 + 2]))) > var_12));
                    }
                    var_26 = ((var_11 + (arr_10 [i_5] [i_5] [i_7] [i_6])));
                }
            }
        }
    }
    var_27 -= ((var_2 ? var_13 : var_2));
    var_28 = (((((246 == ((var_8 << (var_14 - 233)))))) + var_15));
    #pragma endscop
}
