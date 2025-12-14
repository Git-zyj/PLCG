/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 += ((var_11 ^ (arr_7 [i_1] [i_1] [i_2] [i_0])));
                    arr_10 [i_0] [i_2] [i_0] [i_0] = 52;
                }
                var_21 &= ((((((arr_2 [i_1] [i_0]) ? (arr_9 [i_0] [i_1] [i_0] [i_0]) : 24))) ? (((arr_2 [i_0] [i_1]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_1]))) : (((arr_9 [i_0] [i_1] [i_1] [i_1]) - var_7))));
            }
        }
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_15 [i_3] = (max(((((180 ? var_15 : (arr_2 [i_3] [i_3]))))), (((((707275843 ? var_0 : var_12))) ? ((1 ? 17330556884107264754 : (arr_2 [i_3] [i_3]))) : (((var_11 ? (arr_0 [i_3]) : 0)))))));

        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            var_22 = (max(20183, (((((-(arr_14 [i_4])))) ? 65512 : (min(var_15, var_10))))));

            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                arr_21 [i_5] [6] [i_3] [10] = 2058317639;
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_23 *= (max(((((arr_20 [i_7 + 1] [i_6 - 1] [i_4 + 2]) ? (arr_20 [i_7 + 2] [i_6 - 1] [i_4 + 2]) : var_4))), ((max(992, 1392936306)))));
                            var_24 = ((((~(arr_25 [5] [i_7 - 3] [i_7] [i_7] [i_7] [i_7 - 2] [i_6]))) + (((arr_14 [i_4 - 2]) % var_18))));
                            var_25 += ((((max(var_11, (((arr_23 [i_6]) ? (arr_0 [i_3]) : (arr_22 [i_3])))))) ? (arr_1 [i_4 + 1] [i_7 + 2]) : (((arr_17 [i_6 - 1] [i_7 - 1]) ? (arr_17 [i_6 - 1] [i_7 + 1]) : (arr_17 [i_6 - 1] [i_7 + 3])))));
                            var_26 = (min(var_26, ((min((min(((max(52, (arr_4 [17])))), (arr_19 [i_4 - 2] [i_4]))), -var_12)))));
                        }
                    }
                }
            }
        }
        for (int i_8 = 2; i_8 < 18;i_8 += 1)
        {
            arr_31 [i_3] = (((0 & -1173126423) ? ((62 ? (arr_19 [i_8 + 2] [i_8 + 1]) : (arr_7 [i_8 + 2] [i_8] [i_8] [i_8]))) : ((max(((0 ? (arr_26 [i_3]) : (arr_29 [i_3]))), ((-60 ? (arr_4 [i_8]) : var_11)))))));
            var_27 = (((max((arr_24 [1] [i_8 + 2] [1] [i_3] [i_3]), (arr_27 [i_3] [i_8 - 1] [i_8 + 2] [i_3] [i_8] [i_3] [i_3]))) & (((arr_6 [i_8] [i_8] [i_8] [i_3]) ? (arr_6 [i_3] [i_3] [14] [i_3]) : (arr_6 [i_8] [i_3] [i_3] [i_3])))));
        }
        var_28 |= var_16;
    }
    var_29 = ((((((-112 ? var_9 : 5471709634797213162)))) ? ((1173126432 ? var_10 : ((var_3 ? var_3 : var_19)))) : -var_9));
    var_30 = (233 | var_0);
    var_31 = var_8;
    #pragma endscop
}
