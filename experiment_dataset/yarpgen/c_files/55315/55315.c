/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_17 &= (((((~2383) + 2147483647)) << (((((((arr_2 [i_0] [14] [14]) | (arr_2 [i_1] [1] [i_0]))) + 272867955)) - 30))));
            arr_5 [i_1] [i_1] [i_1] = ((~(arr_4 [i_0] [i_1] [i_0])));
            var_18 = 1;
        }
        var_19 = (min((((((min(53, (arr_0 [i_0]))))) - var_11)), var_2));
        arr_6 [i_0] = ((((~(~47))) > 59));
        var_20 *= var_12;
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 22;i_5 += 1)
                {
                    {
                        var_21 = (max(var_21, (arr_13 [i_4 - 1] [i_4 - 1])));
                        var_22 = (((1014068334340390927 + 202) == var_2));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_23 = ((-1 ? (!-13246) : var_10));
                            var_24 = var_1;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_25 += ((((var_14 ? 0 : (arr_10 [i_5 - 1]))) ^ (arr_10 [i_5 - 1])));
                            var_26 ^= (((~(arr_10 [i_4 + 1]))));
                            var_27 = (max(1, 78));
                            var_28 -= -1014068334340390928;
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_26 [i_4] = var_12;
                            var_29 = (((arr_7 [i_8]) ? (((8234952988758765426 / (arr_18 [i_2] [i_4] [i_4] [i_8])))) : (arr_20 [i_8] [i_3] [i_2] [i_3] [i_2])));
                            var_30 = (53 == 159);
                            var_31 = (min(var_31, 2450835620003645809));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    var_32 = (arr_22 [i_9 + 1] [i_9 - 1] [i_10] [i_10] [i_9]);
                    var_33 = (((min(((var_12 ? var_11 : -1014068334340390927)), ((((arr_13 [i_2] [i_10]) <= var_14))))) != (~var_3)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_34 = ((((!(arr_38 [i_11] [i_11 + 1] [i_11 + 1]))) ? (202 >> 2) : ((max((arr_8 [i_11] [i_11]), 0)))));
                    arr_40 [i_12] [i_2] [i_2] = ((-148641577060033028 || (((max(1, -148641577060033033)) >= (arr_28 [i_2] [i_11 + 1])))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_35 &= ((190 < ((+((((arr_35 [i_2] [i_2]) != -148641577060033028)))))));
                                arr_46 [i_14] [i_14] [i_12] [i_11] [i_14] [i_2] = var_5;
                            }
                        }
                    }
                    var_36 = (min((~var_11), var_11));
                }
            }
        }
    }
    var_37 = (((var_4 + 2147483647) >> var_3));
    var_38 = (((-1014068334340390945 == 8248220090003646298) ? (max((((var_5 ? var_8 : -23411))), ((-7610563366393263019 ? 536739840 : 5799852671531386860)))) : ((((var_15 + 9223372036854775807) << (3607849440 - 3607849440))))));
    var_39 = var_2;
    #pragma endscop
}
