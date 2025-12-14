/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, -489115364));
    var_14 = -15701;
    var_15 = (min(var_15, var_0));
    var_16 = (min(((((var_5 * var_8) + (~1083773832)))), var_0));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_2] = ((((18446744073709551611 & (((var_2 ? 9819 : var_1))))) + (((-(arr_1 [i_0]))))));
                    arr_11 [i_2] [i_1] [i_2] = ((-((38296 - ((((-32767 - 1) > -489115349)))))));
                }
            }
        }
        arr_12 [i_0] = 1;
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_17 = (min(var_17, (((!(((8963 >> (((((arr_15 [i_3]) ? (arr_13 [i_3]) : 1784406052)) - 84))))))))));
        arr_16 [i_3] [i_3] = (max((arr_14 [i_3]), ((((arr_14 [i_3]) <= 228)))));
        arr_17 [11] = (((arr_14 [i_3]) + (max((arr_14 [i_3]), (arr_13 [i_3])))));
        arr_18 [i_3] = var_7;
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    arr_26 [i_4] [i_4] = (((((!(((-8964 ? 105 : -26012)))))) & 1));
                    var_18 += (-(max(34359738367, -0)));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 16;i_8 += 1)
                        {
                            {
                                arr_32 [i_4] [i_5] [i_6] [i_4] [i_8 - 2] = (((((arr_28 [i_7] [i_7] [i_7] [i_7 + 1]) ? (arr_27 [4] [4] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]) : 181)) ^ (((((arr_28 [i_7] [i_7 - 1] [i_7] [i_7 - 1]) && (arr_28 [i_7 - 1] [16] [i_7 + 1] [i_7 + 1])))))));
                                var_19 += (arr_14 [i_4]);
                                var_20 -= (max(24, 1394723892));
                            }
                        }
                    }
                    var_21 -= (arr_19 [i_5]);
                    arr_33 [i_4] [i_6] [i_4] [i_5] &= -9815;
                }
            }
        }
        var_22 = ((-60 & (((var_9 ? 112 : (arr_20 [i_4]))))));
    }
    #pragma endscop
}
