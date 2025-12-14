/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_11 = (~473655892);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_12 ^= 899076587;
                            var_13 &= ((~(max(var_7, (~var_0)))));
                            var_14 = ((((max(((var_1 ? (arr_8 [i_4] [i_1] [i_2] [11] [3] [i_3]) : (arr_4 [17] [17]))), (((473655896 ? 473655913 : -473655865)))))) ? (--0) : ((((!(arr_8 [i_4] [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2 - 1])))))));
                            var_15 = 1595966961512296034;
                        }
                    }
                }
            }
            var_16 = ((!(((((min((arr_4 [8] [8]), (arr_8 [2] [i_1] [i_1] [i_0] [i_0] [2])))) ? (arr_10 [i_0] [i_0] [i_0] [i_1] [i_1]) : (((-1955119067 ? (arr_6 [i_0] [3] [i_1] [i_1]) : 1955119062))))))));
            var_17 = ((((1367782951692453511 >> (-1955119086 + 1955119143)))) ? (((-(1955119085 / 1)))) : (max((arr_2 [i_0]), (arr_10 [i_0] [13] [i_0] [i_1] [i_1]))));
            var_18 = (arr_2 [i_0]);
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_19 = (max(((-(min(var_7, var_0)))), (((-(arr_13 [i_0] [i_0]))))));
            arr_15 [i_5] = (-(((!(arr_8 [12] [i_0] [i_0] [i_5] [i_5] [i_5])))));
            var_20 = (-(((!(((-1955119087 ? 2077450632 : 27)))))));
            var_21 = -var_10;
        }
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            arr_18 [i_6] [i_6 - 1] = (max((-2147483647 - 1), ((~(((arr_1 [i_0]) & var_7))))));
            var_22 = (max(var_22, (1463334516 & 128849018880)));
        }
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
    {
        var_23 -= min((arr_3 [i_7] [i_7] [i_7]), (((((8146634876730728295 ? -1331765224 : 1526741489))) ? var_0 : (max((arr_14 [17]), (arr_10 [14] [12] [i_7] [i_7] [10]))))));
        var_24 = ((arr_9 [i_7] [i_7] [10] [i_7] [i_7] [10] [14]) ? ((((((arr_10 [13] [i_7] [i_7] [i_7] [i_7]) ? (arr_16 [12] [i_7]) : (arr_1 [i_7])))) * -496532153787111025)) : ((min((arr_7 [i_7] [i_7] [i_7]), (arr_20 [4])))));
    }
    var_25 &= (-(min(var_8, var_5)));
    var_26 -= var_4;
    #pragma endscop
}
