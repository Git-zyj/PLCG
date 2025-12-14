/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = var_13;
        var_21 = (arr_2 [i_0]);
        arr_3 [i_0] = (((arr_0 [i_0]) / var_2));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_22 = (min(var_22, ((min(var_10, (!7))))));
            var_23 |= (min((((((0 % (arr_4 [i_1] [i_1] [i_1])))) & var_16)), ((min((arr_1 [i_1]), 64795)))));

            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                var_24 = (((((var_9 ? ((181613923 ? var_12 : (arr_5 [i_1]))) : var_6))) <= ((223 ? (max(11512493429608623889, 0)) : (arr_4 [i_0] [i_0] [i_0])))));
                var_25 = (min((((((arr_7 [i_1] [i_1] [i_1]) ? (arr_1 [i_0]) : -2323843174762505978)))), ((var_10 ? ((var_15 ? (arr_0 [i_0]) : 72)) : (((var_0 ? var_6 : var_10)))))));

                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_11 [i_1] [i_0] [i_1] = ((((var_7 + (arr_9 [i_3] [i_1] [i_3] [i_3])))));
                    var_26 *= (((((4113353373 ^ (arr_7 [i_0] [i_2 + 4] [i_2])))) ? (arr_7 [i_0] [i_2 + 2] [i_2]) : ((-(arr_7 [i_0] [i_2 + 2] [i_2 - 2])))));
                }
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    arr_14 [i_0] [i_1] [i_1] [i_4 - 2] [i_4 - 2] = 183;
                    arr_15 [i_4 - 2] [i_1] [i_1] [i_0] = (((max(16861235631292377330, var_15)) == (~var_10)));
                    var_27 = (var_5 / 72);
                    var_28 = (((((var_13 ? (arr_9 [i_2 + 3] [i_1] [i_4 - 2] [i_4 - 2]) : var_18))) ? (arr_8 [i_2 + 3] [i_2 + 2] [i_4 - 2] [i_4 - 1] [i_4 + 1]) : var_7));
                }
            }
            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                arr_19 [i_5 - 1] [i_1] [i_1] [i_0] = var_17;
                arr_20 [i_5] [i_5] [i_5] [i_0] &= var_0;
            }
            for (int i_6 = 4; i_6 < 23;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    var_29 = var_6;
                    var_30 += (((((arr_7 [i_0] [i_6 - 1] [i_7]) - -25553))));
                    var_31 |= ((((!(((12 ? var_4 : var_18))))) ? (((arr_23 [i_6 - 3] [i_6 - 2] [i_6 + 1]) ? (min(15574743449546112331, (arr_21 [i_6 - 1] [i_7] [i_0]))) : (((((arr_5 [i_0]) && 63890)))))) : ((max(0, (arr_8 [i_1] [i_1] [i_1] [i_6 - 4] [i_7]))))));
                    var_32 = (max(var_32, ((((arr_23 [i_1] [i_6 + 1] [i_6 - 2]) || (((~((((arr_16 [i_0] [i_1]) <= (arr_6 [i_0] [i_7]))))))))))));
                    var_33 = (min(var_4, 244));
                }
                arr_26 [i_1] = ((-7418866593368414702 ? ((min((((163 ? var_5 : 1))), (arr_6 [i_0] [i_1])))) : var_0));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_34 = (arr_7 [i_1] [i_1] [i_8]);
                var_35 = 244;
            }
            arr_29 [i_0] [i_1] [i_1] = ((-(((((15008065529137883398 ? var_18 : (arr_24 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])))) * ((var_12 ? var_4 : 1))))));
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                {
                    var_36 |= (arr_16 [i_9] [i_11]);
                    arr_38 [i_9] [i_10] [i_9] [i_11] = ((var_8 ? (((((-(arr_17 [i_9])))) ? 801038786 : (min(var_14, var_14)))) : (((((arr_12 [i_10] [i_11]) <= (arr_12 [i_10] [i_9])))))));
                }
            }
        }
    }
    #pragma endscop
}
