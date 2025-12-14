/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [1] = (-(((arr_1 [i_0]) ? var_10 : (arr_1 [i_0]))));
                arr_5 [i_0] = 710040299435074561;

                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    var_13 = var_3;
                    var_14 = (min(((((max((arr_8 [16]), (arr_7 [i_0])))) ? ((~(arr_2 [i_0] [i_2]))) : var_2)), (((!((min((arr_0 [i_0] [22]), var_7))))))));
                    arr_10 [i_0] [5] [i_2] = (min(var_0, (((((arr_2 [i_2 + 1] [i_2 + 1]) + 2147483647)) << (((((arr_2 [i_2 + 1] [i_2 - 1]) + 751548245)) - 7))))));
                    arr_11 [i_0] [3] [i_2] [i_1] &= ((((!(arr_8 [i_0])))));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_15 *= var_3;
                    var_16 = var_2;
                }
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    arr_17 [i_0] [i_1] [i_4] = var_8;
                    arr_18 [i_4] [19] [i_4] = ((~(!1139993825)));
                    arr_19 [i_4] [i_1] = var_6;
                }
                var_17 *= (9223372036854775807 == 3154973471);
                var_18 ^= (max(((((!6037) * (!41)))), (arr_7 [i_0])));
            }
        }
    }
    var_19 = var_6;
    #pragma endscop
}
