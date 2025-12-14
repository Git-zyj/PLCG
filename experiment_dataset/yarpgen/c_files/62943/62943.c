/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_12 = (((arr_2 [i_0 - 1] [i_0 - 1]) && (((1329213650 * (arr_1 [i_0] [i_0]))))));
        var_13 = (((arr_2 [i_0] [i_0 - 2]) | (arr_2 [i_0 - 2] [1])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_14 &= (arr_9 [i_0] [0] [0]);

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_16 [i_2] [i_2] = (!(((-1541865137 % (-2147483647 - 1)))));
                            var_15 = ((-1541865139 >= (arr_11 [i_2] [i_2] [i_2 + 1])));
                            var_16 += ((-(arr_12 [i_0] [i_1] [i_1] [i_2 + 1] [i_1] [i_1] [i_1])));
                            arr_17 [i_2] = (((arr_9 [i_0] [i_2 + 1] [i_4]) ? (arr_9 [i_0] [i_2] [i_4]) : (arr_9 [i_1] [i_1] [i_4])));
                            var_17 = (-(arr_12 [i_1] [i_2 - 1] [i_2 + 1] [i_2] [i_4] [i_4] [i_2 + 1]));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            var_18 += (arr_18 [i_0] [i_0 - 2] [i_0] [i_0 - 1] [i_2 - 1]);
                            var_19 = (~1329213650);
                            arr_20 [i_0 + 1] [i_2] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] = 121;
                            var_20 = (min(var_20, ((((1586351365 * 3165136346) >= ((-32751 ? (arr_5 [6] [6] [i_2]) : (arr_3 [i_3] [15]))))))));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_21 = (((~1329213650) || ((((arr_0 [i_1] [i_3]) << (9503 - 9501))))));
                            arr_25 [i_0] [i_2] [i_1] [i_1] [i_1] [9] [7] = -1541865141;
                        }
                        var_22 = ((((!(arr_18 [i_0] [7] [7] [i_0] [i_3]))) ? -1541865129 : (arr_5 [i_1] [i_2 + 1] [15])));
                    }
                }
            }
        }
    }
    for (int i_7 = 2; i_7 < 18;i_7 += 1) /* same iter space */
    {
        arr_30 [i_7 + 1] = (min(((((1329213650 ? (arr_14 [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_2 [18] [18]))) + ((max((arr_28 [7]), 1541865132))))), (((-1329213651 + (max((arr_10 [i_7] [i_7] [11] [i_7] [i_7]), 1306242743)))))));
        var_23 = (min(((min((arr_4 [i_7 - 1]), (((!(arr_1 [i_7] [9]))))))), (43 + 1369612457)));
        arr_31 [13] = (min((((((min((arr_1 [i_7] [12]), 1541865141))) ? ((((arr_27 [i_7]) ? 32742 : 0))) : ((1541865140 % (arr_1 [i_7] [i_7])))))), ((((((arr_23 [i_7] [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7]) | (arr_1 [i_7] [i_7])))) ? ((((arr_24 [i_7] [4] [i_7] [i_7 - 2] [i_7]) & 5710))) : (min(1541865137, (-9223372036854775807 - 1)))))));
        var_24 |= max(((-(((arr_5 [i_7] [13] [i_7]) + 0)))), (((!((!(arr_3 [i_7] [i_7])))))));
    }
    var_25 ^= (max((((max(8930805308380970641, var_1)) / ((max(-1541865132, -1541865137))))), ((min(((max(2, 53))), -25095)))));
    var_26 = (((max((max(var_0, 1764)), var_3))) % (max((min(-1329213651, var_5)), ((min(var_0, 32739))))));
    var_27 = (min((((var_4 || (var_7 <= -1541865133)))), (((var_7 ? 219 : var_1)))));
    #pragma endscop
}
