/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_14, (max(var_11, var_14))));
    var_20 = (max(var_20, (((-(-2115736177 > 16777212))))));
    var_21 = (((max(2115736157, var_7)) ^ -2115736177));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_22 += ((-4179743351 ? (max(2115736183, -2115736173)) : 113));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_3] [13] [i_3] [10] = var_4;
                            var_23 = (-2115736184 ^ 113);
                            arr_15 [i_3] [17] [i_2] [5] [i_2] [4] = 32767;
                            var_24 = var_4;
                            var_25 = ((-8421347361123583139 ? -4503659194528763602 : 2115736183));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            arr_19 [i_5] = ((~((~(max(10696394356177033622, (arr_12 [i_0] [i_5] [i_0] [i_5])))))));
            var_26 = var_6;
        }
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    var_27 = (-24402 == -32767);
                    arr_27 [i_7] = ((var_15 ? (((((((arr_9 [15] [0] [12] [i_6] [i_7] [7]) ? -2115736183 : -2115736184))) ? 24424 : var_6))) : ((((arr_18 [9]) == 31693)))));
                    var_28 = ((~(arr_21 [i_0] [i_6] [i_7])));
                    arr_28 [i_7] [4] [i_7] = ((+(((arr_18 [5]) | (((1 >= (arr_11 [2] [i_7] [i_6] [4] [13] [i_7] [i_0]))))))));
                    arr_29 [i_7] = (((2115736175 ? (arr_16 [i_6 - 2] [i_7]) : (arr_16 [3] [i_6 - 1]))));
                }
            }
        }
        var_29 = -2115736176;
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
    {
        arr_32 [i_8] [i_8] = (arr_10 [i_8]);
        arr_33 [15] [i_8] = 0;
        var_30 = (max(var_30, -33859));
    }
    #pragma endscop
}
