/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_20 ^= ((1 ? (arr_3 [i_1] [10] [i_1 + 2]) : (((36719 ? (arr_4 [i_1 + 2] [i_1 - 1] [i_1 + 2]) : var_1)))));
            arr_6 [17] [i_0] = 15618926293242445200;
            var_21 -= var_14;
            arr_7 [i_0] [1] [i_0] = (max((max(var_5, var_17)), (max((arr_5 [i_0] [i_0]), (arr_5 [i_0] [i_0])))));

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_22 *= ((((((((var_12 ? 751648833 : var_7))) ? 2973987766 : 5955125784224991488))) ? ((29865 ? var_5 : (max(var_17, 3687638145)))) : 1));

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_23 = ((((max(((((arr_11 [i_0] [i_0]) == 59))), (arr_9 [i_0] [i_1] [i_2] [i_3])))) ? ((((2406728925 ? var_18 : (arr_11 [i_1] [i_3]))))) : ((var_3 ? (var_13 | var_4) : 0))));
                    var_24 = (arr_10 [i_0] [20] [21]);
                    var_25 = (max(var_25, ((var_5 ? (arr_9 [0] [i_1] [i_2] [i_3]) : (((1244666997 % var_16) ? (~-4) : 751648809))))));
                }
            }
        }
        var_26 = (-(((arr_9 [i_0] [i_0] [i_0] [i_0]) >> (((arr_9 [i_0] [i_0] [i_0] [i_0]) - 2583668536)))));
    }
    var_27 += 1771309817;
    /* LoopNest 3 */
    for (int i_4 = 3; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                {
                    var_28 += (max(4294967265, -666976767));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_29 -= ((var_2 * ((((max(var_0, var_7))) & (!243)))));
                                var_30 += (((((var_4 ? 66 : (arr_15 [i_4 + 1])))) ? (arr_15 [i_4 + 3]) : ((-3861448296502748125 ? (arr_15 [i_4 - 1]) : var_13))));
                                arr_28 [i_4] [i_4] [1] [i_8] [i_6] = ((max((arr_5 [i_4 - 1] [i_6]), var_17)));
                                var_31 = (min(var_31, (((+(((arr_27 [1] [i_7 - 1] [5] [i_7 + 1] [i_7 + 1] [i_7 - 2]) / 59)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
