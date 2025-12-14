/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_15 = (max(var_15, ((((arr_0 [i_0]) >= (((max(1, var_10)))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 23;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_1] [14] [14] [i_4] = ((250 ? ((37 ? -127 : 34)) : (((arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]) ? (arr_7 [i_0 - 1] [i_0 - 1] [12] [12]) : (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                            var_16 = (((((arr_4 [i_0 + 1] [11] [i_2]) ? var_9 : (var_9 + -445793625812703104))) > (1 * var_10)));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            var_17 = (~var_2);
                            arr_17 [i_0 + 1] [i_0 + 1] [i_0 - 1] [5] [i_5 + 1] = 1;
                            var_18 = (min(var_18, (-1562578800 != 1000036809)));
                            arr_18 [i_0] [i_1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_3] [16] = ((var_10 | (arr_3 [i_0 - 1])));
                            arr_19 [i_5] [18] [i_2] [i_2] [i_1] [i_0 + 1] = ((var_0 / ((var_13 ? 250 : 1))));
                        }
                        var_19 = (max(((((arr_4 [i_1] [i_1] [i_1]) ? var_0 : var_9))), ((var_7 | (arr_6 [i_0] [i_0 - 1] [i_0 - 1] [i_2 - 1])))));
                        arr_20 [i_0 - 1] [24] [i_2] [i_3] = ((((((arr_5 [i_1]) ? (((arr_12 [i_0] [13] [13] [i_0] [i_0]) ? (arr_5 [i_0]) : -7250121804124187845)) : var_2))) ? 4294967278 : (arr_7 [i_3] [1] [i_1] [i_0])));
                    }
                }
            }
        }
        var_20 = (var_4 / ((~((-6212 ? var_10 : -3499795606939498159)))));
        arr_21 [i_0 - 1] = ((((min((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]), (arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 1])))) & (max(-7250121804124187845, ((((arr_3 [20]) ? 65520 : var_3)))))));
    }
    var_21 = ((((((var_6 >= var_2) | var_14))) ? var_9 : ((var_1 + (var_8 || var_13)))));
    var_22 = ((((((-3499795606939498159 ? 2168297303227996440 : var_12)))) ? ((((~37) | var_3))) : var_7));
    #pragma endscop
}
