/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (5312959160257463234 ? ((1987554512149715606 ? 8421191086157685015 : 10025552987551866600)) : (8421191086157685015 <= 721270275236743412));
        var_20 = (min(var_20, ((8421191086157685015 ? (((arr_2 [i_0] [i_0]) ? (arr_1 [8] [i_0]) : (arr_2 [i_0] [i_0]))) : (((min(1080439470282583489, (arr_0 [12])))))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                {
                    arr_11 [i_2] [i_1] = ((var_15 ? 13153449961920889727 : (!10921181631617575989)));
                    var_21 = (((((((1559171856 ? 3307677759 : 10025552987551866600))) ? var_5 : var_1))) ? ((~(arr_6 [i_1]))) : (arr_6 [i_3 - 1]));

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_22 |= (min((((var_8 & (arr_5 [i_3 - 1])))), (((arr_13 [i_1] [i_2] [i_1] [i_3 + 1]) ? (min(var_19, var_11)) : var_14))));
                        var_23 ^= ((~(max(7525562442091975626, 10921181631617575989))));
                        arr_14 [i_1] [i_2] [i_3] [i_4] = arr_4 [i_3 + 1];
                        var_24 = (min(var_24, ((min((((!(var_19 || var_4)))), (arr_9 [i_3 + 1] [i_4] [i_4]))))));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_17 [i_1] [i_1] [i_2] [i_3 - 2] [i_3] [i_5] = (arr_10 [i_1] [i_2] [i_3 - 2]);

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_25 -= var_1;
                            var_26 = (!2812565060);
                            arr_20 [i_6] [i_6] [i_3] [i_6] [i_1] = ((((8421191086157685015 ? (arr_5 [i_3 + 2]) : var_6)) <= (((var_10 ? 2735795439 : ((var_19 / (arr_13 [i_6] [i_5] [i_2] [i_1]))))))));
                        }
                    }
                }
            }
        }
    }
    var_27 = 2735795439;
    var_28 = (!3844600300790035122);
    #pragma endscop
}
