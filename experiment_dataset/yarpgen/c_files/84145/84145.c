/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 |= (max(589348742, ((-((var_13 ? 325223325 : -589348747))))));
                            var_19 ^= (((!(arr_4 [i_0] [i_0] [i_0]))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_20 = (((((~(!-7723261040265076656)))) ? 2126018265 : var_9));
                    var_21 = var_1;
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (((-7723261040265076656 + 9223372036854775807) << (((arr_10 [i_4] [i_0] [i_0] [i_0]) / (max(0, (arr_2 [i_4] [i_1])))))));
                }
                var_22 = (~(arr_7 [i_1] [i_1] [13] [1] [1]));
                var_23 = (max(var_23, (((274112085 ? 325223325 : ((((((arr_2 [8] [i_0]) ? 19 : (arr_4 [i_1] [i_1] [i_0])))) ? ((107614431 ? var_2 : 5168827936824259511)) : -17286)))))));
            }
        }
    }
    var_24 = (max(var_24, var_17));
    var_25 = ((!((((111 != -589348747) * (var_15 != var_1))))));
    #pragma endscop
}
