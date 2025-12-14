/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min((!var_5), -var_14)) > (!-var_11)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_1] [i_1] = var_3;
                        arr_13 [i_3 - 2] [i_1] [7] [i_1] [i_0] = ((((!((((arr_3 [i_0]) ? -388 : var_4))))) ? (((arr_9 [i_1] [i_3 - 1] [i_1] [i_3]) ? var_4 : (arr_9 [i_1] [i_1] [1] [i_3]))) : (!65024)));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 15;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            arr_24 [15] [15] [i_4] [i_6] [15] [13] = ((!((((arr_11 [i_6 + 2] [i_7] [i_6 + 2] [i_7]) ? (arr_11 [i_6] [i_7] [i_7] [i_0]) : (381 <= -8378374422512976305))))));
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_0 ? ((255 ? (!255) : ((-512 ? 201326592 : 512)))) : 23417));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [2] [i_5 + 4] [0] [i_6] [i_5 + 4] [i_8] = 2610365631306809881;
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_16 [i_5 - 3] [i_4] [i_6 + 1] [i_4]) ? (!-2507938540792198178) : var_15));
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [13] = ((var_15 ? var_8 : var_1));
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [i_4] [i_0] [1] [i_6] [i_6] [i_0] = (min((arr_11 [i_6] [i_4] [i_6] [i_4]), var_5));
                            arr_36 [14] [i_0] [i_5 - 3] [i_0] [i_0] = ((((~(min(var_6, 28))))) ? ((((~512) || (((-(arr_6 [i_0]))))))) : 7801171501458724898);
                            arr_37 [i_9] [8] [0] [i_4] [0] = (max((((((((arr_7 [i_4] [i_4] [i_5]) ? var_18 : var_13))) || 28))), (~0)));
                            arr_38 [i_0] [i_0] [i_0] = var_3;
                        }
                        arr_39 [i_5] [i_5] &= ((!(((var_16 ? (((var_16 >= (arr_33 [9] [9] [i_5 + 4] [9] [i_0])))) : ((min((arr_9 [i_4] [i_4] [i_5] [16]), var_13))))))));
                    }
                }
            }
        }

        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            arr_42 [i_0] [i_0] [i_0] = ((((var_18 == ((~(arr_8 [i_0] [i_0] [i_0] [i_0]))))) && (((-((-(arr_6 [i_0]))))))));
            arr_43 [i_10] [8] = arr_10 [i_0] [i_10] [i_0] [i_10] [i_10] [i_10];
        }
    }
    #pragma endscop
}
