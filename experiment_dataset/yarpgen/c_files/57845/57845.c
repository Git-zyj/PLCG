/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (var_12 > var_2)));
                    var_19 = (min(var_19, (((+((((1 >> (((((-2147483647 - 1) - -2147483641)) + 19)))))))))));
                    var_20 = (((((var_8 ? (arr_1 [i_0 - 1]) : -613398162))) ? var_10 : (arr_1 [i_0 - 1])));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_10 [i_2] [i_1] = (((arr_4 [i_0] [i_1]) ? ((7 ? -26571 : 38771)) : -4095));
                        var_21 = (max(var_21, (!56828)));
                        arr_11 [i_0 + 1] [i_0] [i_0] [i_1] = 124;
                        arr_12 [i_1] [i_1] [i_3] = 23939;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_17 [i_0 + 1] [i_1] [i_0 + 1] [i_4] = 26291;
                        var_22 = var_7;
                        var_23 = (((arr_4 [i_1] [i_1]) > -1392964161));
                        arr_18 [i_0 - 1] [i_1] [i_2] [i_1] [i_4] = (((var_0 && 1392964160) ? ((39964 ? var_14 : 1968108098)) : 63));
                        var_24 = (((arr_6 [i_0] [i_0] [i_2] [i_4]) ? 11037680146138385300 : ((((arr_15 [i_0 + 1] [i_1] [i_2] [i_4]) != var_10)))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                arr_23 [1] [i_5] = var_4;
                var_25 += (((var_0 + 9223372036854775807) << ((((((((127 ? -1704208390 : 23937)))) + 10297)) - 51))));
            }
        }
    }
    var_26 = ((-(min(var_3, ((var_0 ? var_12 : var_12))))));
    var_27 = var_4;
    #pragma endscop
}
