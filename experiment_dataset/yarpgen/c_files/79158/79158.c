/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1766356890;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 *= (var_7 || -1201215850);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 &= (((var_0 ? (max(var_11, (arr_3 [i_0] [i_0] [i_2]))) : 1201215860)));
                    var_17 = (max((((arr_2 [i_0]) ? var_12 : 65535)), (((((max((arr_0 [i_0]), 1201215861))) >= (arr_2 [i_0]))))));
                    var_18 *= ((!(((min(-1955441310, 1201215860))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_19 = (max(var_19, -1739594316933546374));
        var_20 = (((((((var_5 == var_6) | (-2147483647 - 1))) + 9223372036854775807)) >> (((max(1201215860, -394891023)) - 1201215823))));
        arr_8 [i_3] [i_3] = (arr_6 [i_3] [i_3]);
        var_21 &= var_0;
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_22 = (min(var_22, 51994));
        var_23 = ((((((arr_10 [i_4]) ? (arr_10 [i_4]) : (arr_10 [i_4])))) ? -1931043954 : (max(-236792829, 41416))));
        var_24 &= (~((((arr_9 [i_4] [i_4]) && (arr_9 [i_4] [i_4])))));
        var_25 |= ((arr_10 [i_4]) & (((((-1118071545 ? 7583271223694129566 : var_9))) ? (((!(arr_9 [i_4] [17])))) : (arr_10 [i_4]))));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        var_26 = (arr_11 [i_5] [i_5]);
        arr_13 [i_5] = max(((((arr_12 [i_5] [i_5]) < 19548))), 130168231);
        arr_14 [i_5] = (((((336722695 / (var_13 < 483227095)))) & (arr_12 [i_5] [i_5])));
    }
    var_27 = (((1330949913 + 321813275) == var_13));
    var_28 = -175094294;
    #pragma endscop
}
